/*Pui Tam
Homework 1
CS 5040
*/



#include <cmath>
#include "QuadraticEquation.h"

QuadraticEquation::QuadraticEquation()
{
}

QuadraticEquation::~QuadraticEquation()
{
}

QuadraticEquation::QuadraticEquation(double a, double b, double c)
{
	a = a;
	b = b;
	c = c;
}

void QuadraticEquation::expression(double a, double b, double c)
{
	cout << "Your Quadratic Expression is:" << a << "x^2" << "+" << b << "x" << "+" << c << endl;
}

void QuadraticEquation::evalExpression(double input, int a, int b, int c)
{
	double answer = ((a)*pow(input, 2) + ((b) * (x) + c));
	cout << "The Answer is: " << answer << endl;
}

void QuadraticEquation::findCoefficient(double a, double b, double c);
{
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
}

void QuadraticEquation::numberOfZeros(double a, double b, double c)
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

void QuadraticEquation::realZeros(double a, double b, double c)
{
	discriminant = ((pow(b,2)) - (4*a*c));
	
	if((discriminant == 0) || (discriminant > 0))
	{
	x1 = ((-b) + sqrt(pow(b,2) - (4*a*c)))/(2*a);
	x2= ((-b) - sqrt(pow(b,2) - (4*a*c)))/(2*a);
	cout << "The Real Zeros are" << x1 << x2 << endl;
	}
	else
	{
		cout << "There Are No Real Zeros." << endl;
	}
}