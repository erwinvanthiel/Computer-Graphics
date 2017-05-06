#ifndef EXERCISES_H
#define EXERCISES_H

#include <list>
#include <set>

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
	float visitTree(const Tree& tree, bool countOnlyEvenLevels){ return 0.f; }
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
	return 0;
}
//////////////////////////////////////////////////////////////////

////////////////// Exercise 5 ////////////////////////////////////
typedef std::pair<int, int> location;

int Labyrinth(std::set<std::pair<location, location> > labyrinth, int size)
{
	return 0;
}
//////////////////////////////////////////////////////////////////

#endif