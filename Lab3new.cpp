//course: CS215-004
//Project: Lab Assignment 11
//Date: 11/16/2016
//Purpose: create a collection of mixed objects of different classes derived
//         from the ShapePattern class using a vector of pointers pointing to
//         the base class objects. The polymorphic behavior occurs when
//         calling a virtual function with dynamic binding. 
//         It also provide the practice of using recursion in the implementation
//         of the virtual function named printPattern() in each derived class.
//Author: Jared Rigdon

#include <iostream>
#include <vector>
#include "ShapePattern.h"
#include "RectanglePattern.h"
#include "TrianglePattern.h"

using namespace std;

void pause_215(bool have_newline);

int main()
{
	const int SIZE = 4;
	vector<ShapePattern*> shapes(SIZE);
	RectanglePattern* R0 = new RectanglePattern;
	R0->set_length(12);
	R0->set_width(7);
	shapes[0] = R0;
	shapes[1] = new RectanglePattern(-7, 4);
	TrianglePattern* T0 = new TrianglePattern;
	T0->set_height(7);
	shapes[2] = T0;
	shapes[3] = new TrianglePattern(11);
	shapes[3]->set_pattern('@');

	// Using the pointer to indirectly calling the virtual function printPattern()
	// Apply run-time binding to achieve the polymorphism
	for (int i = 0; i < SIZE; i++)
		shapes[i]->printPattern();

	// Finish using the space, return it to the heap
	// No memory leak!!!
	for (int i = 0; i < SIZE; i++)
		delete shapes[i];

	pause_215(false);
	return 0;
}


void pause_215(bool have_newline)
{
	if (have_newline) {
		// Ignore the newline after the user's previous input.
		cin.ignore(256, '\n');
	}

	// Prompt for the user to press ENTER, then wait for a newline.
	cout << endl << "Press ENTER to continue." << endl;
	cin.ignore(256, '\n');
}
