#pragma once
/*
* File:   RectanglePattern.h
* Author: Jared Rigdon
* Purpose: Provide the declaration of the class named RectanglePattern
*/

#ifndef RECTANGLEPATTERN_H
#define RECTANGLEPATTERN_H

#include "ShapePattern.h"

class RectanglePattern : public ShapePattern
{
public:
	RectanglePattern();	//default constructor

	RectanglePattern(int x, int y);	//constructor

	void set_length(int x);	//sets the length of the pattern

	void set_width(int y);	//sets the width of the pattern

	int patternHelper(int l, int w);	//recursive helper function for the printPattern

	virtual void printPattern();	//prints the pattern and calls the recursive helper function

private:
	int length, width;
};
#endif