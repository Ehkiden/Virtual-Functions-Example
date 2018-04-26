/*
* File:   TrianglePattern.cpp
* Author: Jared Rigdon
* Purpose: it provides the definition of the class named TrianglePattern
*			calls the abstract class ShapePattern
*/

#include "TrianglePattern.h"
#include <iostream>
#include <string>

using namespace std;

TrianglePattern::TrianglePattern()
{
	height = 0;
}

TrianglePattern::TrianglePattern(int x)
{
	height = x;
}

void TrianglePattern::set_height(int x)
{
	height = x;
}
//prints the number of pattern characters and shortens the height until it is equal to zero
int TrianglePattern::patternHelper(int h)
{
	cout << string(h, get_pattern()) << endl;	//calls the get pattern h number of times
	
	return h && patternHelper(h-1);
}

void TrianglePattern::printPattern()
{
	int h = height; //declare a new variable
	
	//check the base case
	if (height <= 0) {
		cout << "Invalid size!\n" << endl;
	}
	else {
		cout << "The Right Triangle Pattern: ( height = " << height << " )" << endl;
		//call the recursive function until it hits zero
		patternHelper(h);
		cout << endl;

	}
}