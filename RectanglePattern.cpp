/*
* File:   RectanglePattern.cpp
* Author: Jared Rigdon
* Purpose: it provides the definition of the class named RectanglePattern
*			calls the abstract class ShapePattern
*/

#include "RectanglePattern.h"
#include <iostream>
#include <string>

using namespace std;

RectanglePattern::RectanglePattern()
{
	length = 0;
	width = 0;
}

RectanglePattern::RectanglePattern(int x, int y)
{
	length = x;
	width = y;
}

void RectanglePattern::set_length(int x)
{
	length = x;
}

void RectanglePattern::set_width(int y)
{
	width = y;
}
//prints the number of pattern characters and shortens the length until it is equal to zero
int RectanglePattern::patternHelper(int l, int w)
{
	cout << string(l, get_pattern()) << endl;	//calls the get pattern l number of times
	
	return l,w && patternHelper(l,w-1); 
}

void RectanglePattern::printPattern()
{
	//declare new variables
	int l = length;
	int w = width;

	//check the base case
	if (length < 0 || width < 0) {
		cout << "Invalid size!\n" << endl;
	}
	else {
		cout << "The Rectangle Pattern: (length = " << length << ": width = " << width << " )" << endl;
		//call the recursive function until it hits zero
		patternHelper(l,w);
		cout << endl;
	}
}
