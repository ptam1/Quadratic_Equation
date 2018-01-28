/*Pui Tam
Homework 1
CS 5040
*/

#include "QuadraticEquation.h"
#include <cmath>


QuadraticEquation::QuadraticEquation()
{
}

QuadraticEquation::~QuadraticEquation()
{
}

//Initializes constructors 
QuadraticEquation::QuadraticEquation(double a, double b, double c)
{
	a = a;
	b = b;
	c = c;
}

//Precondition: User input has to be data type of Double
//Postcondition: Prints out the Quadratic Expression based on the user's coefficients inputs 
void QuadraticEquation::expression(double a, double b, double c)
{
	if((c < 0) && (b <0))        
	{
		cout << "Your Quadratic Expression is:" << a << "x^2" << "+" << "(" << b << ")" << "x" << "+" << "(" << c << ")" << endl;
	}		
	else if(b < 0)
	{
		cout << "Your Quadratic Expression is:" << a << "x^2" << "+" << "(" << b << ")" << "x" << "+" << c << endl;
	}
	else if(c < 0)
	{
		cout << "Your Quadratic Expression is:" << a << "x^2" << "+" << b << "x" << "+" << "(" << c << ")" << endl;
	}
	else
	{
	cout << "Your Quadratic Expression is:" << a << "x^2" << "+" << b << "x" << "+" << c << endl;
	}
}

//Precondition: User input must be of Double data type
//Postcondition: Prints out the user input for 'x' in the discriminant
void QuadraticEquation::evalExpression(double input, double a, double b, double c)
{
	double answer = (((a)*pow(input, 2)) + (((b) * input) + c));
	cout << "The Answer is: " << answer << endl;
}

//Precondition: User input must be of Double data type
//Postcondition: Prints out coefficients based on user's inputs 
void QuadraticEquation::findCoefficient(double a, double b, double c)
{
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
}

//Postcondition: Prints out the total number of real zeros 
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


//Precondition: User input coefficients must be of Double data type
//Postcondition: Prints the actual value of real zeros, if any
void QuadraticEquation::realZeros(double a, double b, double c)
{
	discriminant = ((pow(b,2)) - (4*a*c));
	
	if((discriminant == 0) || (discriminant > 0))
	{
	double x1 = ((-b) + sqrt(pow(b,2) - (4*a*c)))/(2*a);
	double x2= ((-b) - sqrt(pow(b,2) - (4*a*c)))/(2*a);
	cout << "The Real Zeros are " << x1 << " " << "and" << " "<< x2 << endl;
	}
	else
	{
		cout << "There Are No Real Zeros." << endl;
	}
}