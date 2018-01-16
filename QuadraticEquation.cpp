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

void QuadraticEquation::quadraticFormula(int a, int b, int c)
{
	posX = ((-b) + sqrt(pow(b,2) - (4*a*c)))/(2*a);
	negX = ((-b) - sqrt(pow(b,2) - (4*a*c)))/(2*a);
}

void QuadraticExpression::expression(int a, int b, int c)
{
	cout << "Your Quadratic Expression is:" << a << "x^2" << "+" << b << "x" << "+" << c << endl;
}
void QuadraticEquation::evalExpression()
{
	
}
void QuadraticEquation::findCoefficient(string expression[])
{
	cout << "a: " << expression[0] << endl;
	cout << "b: " << expression[6] << endl;
	cout << "c:"  << expression[9] << endl;
}
int QuadraticEquation::numberOfZeros()
{
	
}
int QuadraticEquation::realZeros()
{
	
}