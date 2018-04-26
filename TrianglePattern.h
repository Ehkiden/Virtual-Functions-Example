#pragma once
/*
* File:   TrianglePattern.h
* Author: Jared Rigdon
* Purpose: Provide the declaration of the class named TrianglePattern
*/

#ifndef TRIANGLEPATTERN_H
#define TRIANGLEPATTERN_H

#include "ShapePattern.h"

class TrianglePattern : public ShapePattern
{
public:
	TrianglePattern();	//default constructor

	TrianglePattern(int x);	//constructor

	void set_height(int x);	//sets the height

	int patternHelper(int h);	//recursive helper function for the printPattern function

	virtual void printPattern();	//prints the pattern with the help of the recursive helper function


private:
	int height;
};
#endif