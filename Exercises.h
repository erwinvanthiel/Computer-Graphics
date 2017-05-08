#ifndef EXERCISES_H
#define EXERCISES_H

#include <list>
#include <set>
#include <stack>
#include <queue>

////////////////// Exercise 1 ////////////////////////////////////
std::pair<float, float> Statistics(const std::list<float>& values)
{
	float mean = 0;
	float stddev = 0;
	std::list<float>::const_iterator iterator;
	for (iterator = values.begin(); iterator != values.end(); ++iterator) {
		mean = mean + *iterator;
	}
	mean = mean/values.size();
	for (iterator = values.begin(); iterator != values.end(); ++iterator) {
		float dist = (*iterator - mean)*(*iterator - mean);
		stddev = stddev + dist;
	}
	stddev = stddev/values.size();
	stddev = sqrt(stddev);
	return std::pair<float, float>(mean, stddev);
}
//////////////////////////////////////////////////////////////////

////////////////// Exercise 2 ////////////////////////////////////
class TreeVisitor {
public:
    float visitTree(const Tree& tree, bool countOnlyEvenLevels) {
        std::stack<Tree> stack;
        std::stack<int> stackLevel;
        stack.push(tree);
        stackLevel.push(0);
        float value = tree.value;
        int counter = 0;

        while (!stack.empty()) {
            Tree temp = stack.top();
            stack.pop();
            counter = stackLevel.top();
            stackLevel.pop();
            std::list<Tree> list = temp.children;
            for (Tree i : list) {
                stack.push(i);
                stackLevel.push(counter+1);
                if(countOnlyEvenLevels && stackLevel.top()%2==0){  value = value + i.value;}
                if(!countOnlyEvenLevels){
                    value = value + i.value;
                }
            }
        }
        return value; }
};
//////////////////////////////////////////////////////////////////

////////////////// Exercise 3 ////////////////////////////////////
class Complex {
public:
	Complex(float real, float imaginary){
		this->real = real;
		this->im = imaginary;
	};

	float real, im;

	Complex operator+(Complex c2){
		return Complex(this->real+c2.real, this->im+c2.im);
	}
	Complex operator*(Complex c2){
		return Complex(this->real*c2.real-this->im*c2.im, this->real*c2.im+this->im*c2.real);
	}
	Complex operator-(Complex c2){
		return Complex(this->real-c2.real, this->im-c2.im);
	}

};
//////////////////////////////////////////////////////////////////

////////////////// Exercise 4 ////////////////////////////////////

float WaterLevels(std::list<float> heights)
{
    if(heights.size()<3){
        return 0;
    }

    float highest;
    float highest2;
    int t = 0;
    float x[heights.size()];

    for(float i: heights){
        x[t] = i;
        t++;
    }

    highest = x[0];
    highest2 = x[1];
    int highestIndex = 0;
    int highest2Index = 1;

    for(int i = 1; i<heights.size();i++){
        if(highest<highest2){
            if(x[i] > highest){
                highest = x[i];
                highestIndex = i;
            }
        }
        else{
            if(x[i] > highest2){
                highest2 = x[i];
                highest2Index = i;
            }
        }
    }
    float temp = highest;
    if(highest>highest2){
        temp= highest2;
        x[highest2Index] = -1;
    }
    else{
        x[highestIndex] = -1;
    }

    int highIndex = highestIndex;
    int lowIndex = highest2Index;
    if(highestIndex<highest2Index){
        highIndex = highest2Index;
        lowIndex = highestIndex;
    }
    float result = 0;
    for(int i = lowIndex+1; i<highIndex; i++ ){
        result = result + (temp-x[i]);
        x[i]= -1;
    }
    std::list<float> returnList;
    for(int i = 0; i<heights.size();i++){
        if(x[i]>0){returnList.push_back(x[i]);}

    }
    return result + WaterLevels(returnList);
}
//////////////////////////////////////////////////////////////////

////////////////// Exercise 5 ////////////////////////////////////
typedef std::pair<int, int> location;

std::set<location> Neighbours(location loc, int size, std::set<std::pair<location, location> > labyrinth){

    location North = location(loc.first,loc.second-1);
    location South = location(loc.first,loc.second+1);
    location East = location(loc.first+1,loc.second);
    location West = location(loc.first-1,loc.second);

    std::pair<location, location> NorthPair = std::pair<location, location>(loc,North);
    std::pair<location, location> SouthPair = std::pair<location, location>(loc,South);
    std::pair<location, location> EastPair = std::pair<location, location>(loc,East);
    std::pair<location, location> WestPair = std::pair<location, location>(loc,West);

    std::pair<location, location> NorthPair2 = std::pair<location, location>(North,loc);
    std::pair<location, location> SouthPair2 = std::pair<location, location>(South,loc);
    std::pair<location, location> EastPair2 = std::pair<location, location>(East,loc);
    std::pair<location, location> WestPair2 = std::pair<location, location>(West,loc);

    std::set<location> result;

    bool north = labyrinth.count(NorthPair) > 0;
    bool north2 = labyrinth.count(NorthPair2) > 0;
    if(!north && !north2){
        if(North.first>=0 && North.first<size && North.second>=0 && North.second<size){result.insert(North);}
    }

    bool south = labyrinth.count(SouthPair) > 0;
    bool south2 = labyrinth.count(SouthPair2) > 0;

    if(!south && !south2){
        if(South.first>=0 && South.first<size && South.second>=0 && South.second<size){result.insert(South);}
    }

    bool east = labyrinth.count(EastPair)>0;
    bool east2 = labyrinth.count(EastPair2) > 0;

    if(!east && !east2){
        if(East.first>=0 && East.first<size && East.second>=0 && East.second<size){result.insert(East);}
    }

    bool west = labyrinth.count(WestPair) > 0;
    bool west2 = labyrinth.count(WestPair2) >0;

    if(!west && !west2){
        if(West.first>=0 && West.first<size && West.second>=0 && West.second<size){
            result.insert(West);
        }

    }
    return result;
}

int Labyrinth(std::set<std::pair<location, location> > labyrinth, int size)
{
    location target = location(size-1,size-1);
    Neighbours(location(2, 1), size, labyrinth);
    std::queue<location> queue;
    queue.push(location(0,0));
    std::set<location> visited;
    visited.insert(location(0,0));
    std::queue<int> queueLevel;
    queueLevel.push(1);

    while(!queue.empty()){
        std::set<location> set = Neighbours(queue.front(),size,labyrinth);
        queue.pop();
        int counter = queueLevel.front();
        queueLevel.pop();

        for(location i:set){
            if(visited.count(i)==0){
                queue.push(i);
                visited.insert(i);
                queueLevel.push(counter+1);
                if(queue.front().first == target.first && queue.front().second == target.second){
                    return queueLevel.front();
                };
            }
        }
    }
    return 0;
}
//////////////////////////////////////////////////////////////////

#endif