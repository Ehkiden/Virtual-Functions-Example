#pragma once
/*
* File:   ShapePattern.h
* Author: pike
* Purpose: Provide the declaration of the class named ShapePattern
*          It contains pure virtual function printPattern
*          so it is an abstract class
*/

#ifndef SHAPEPATTERN_H
#define	SHAPEPATTERN_H

class ShapePattern
{
public:
	ShapePattern();
	void set_pattern(char c);
	char get_pattern() const;
	virtual void printPattern() = 0;

private:
	char pattern;
};
#endif	/* SHAPEPATTERN_H */

