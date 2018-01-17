/*Pui Tam
Homework 1
CS 5040
*/


#include <iostream>
#include <cmath>
#include "QuadraticEquation.h"

QuadraticEquation::QuadraticEquation()
{
}

QuadraticEquation::~QuadraticEquation()
{
}

void QuadraticEquation::QuadraticEquation(int a, int b, int c)
{
	a = a;
	b = b;
	c = c;
	
}

void QuadraticExpression::expression(int a, int b, int c)
{
	cout << "Your Quadratic Expression is:" << a << "x^2" << "+" << b << "x" << "+" << c << endl;
}

void QuadraticEquation::evalExpression(string input)
{
	if(input == "a")
	{
		
	}
	else if(input == "b")
	{
		
	}
	else
		{
		
	}
}

void QuadraticEquation::findCoefficient(int a, int b, int c)
{
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c:"  << c << endl;
}

int QuadraticEquation::numberOfZeros(int a, int b, int c)
{
	discriminant = ((pow(b,2)) - (4*a*c));
	
	if(discriminant < 0)
	{
		cout << "There aren't any real zeros." << endl;
	}
	else if(discriminant == 0)
	{
		cout << "There is only one real zero." << endl;
	}
	else if(discriminant > 0)
	{
		cout << "There are two real zeros." << endl;
	}
}

int QuadraticEquation::realZeros(int a, int b, int c)
{
	x1 = ((-b) + sqrt(pow(b,2) - (4*a*c)))/(2*a);
	x2= ((-b) - sqrt(pow(b,2) - (4*a*c)))/(2*a);
}