/*
* File:   ShapePattern.cpp
* Author: pike
* Purpose: it provides the definition of the class named ShapePattern
*          Since this class contains one pure virtual function printPattern(),
*it is an abstract class
*          This file gives the implementation of other member function of the class
*/

#include "ShapePattern.h"

//set up the default pattern as '*' star
ShapePattern::ShapePattern()
{
	pattern = '*';
}

void ShapePattern::set_pattern(char c)
{
	pattern = c;
}

char ShapePattern::get_pattern() const
{
	return pattern;
}
