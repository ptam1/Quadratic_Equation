/*Pui Tam
Homework 1
CS 5040
*/


#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H
#include <iostream>

using namespace std;


class QuadraticEquation
{
	public:
	QuadraticEquation();
	~QuadraticEquation();
//Constructor
QuadraticEquation(double a, double b, double c);

void expression(double a, double b, double c);
void evalExpression(double input, double a, double b, double c);
void findCoefficient(double a, double b, double c);
void numberOfZeros(double a, double b, double c);
void realZeros(double a, double b, double c);


private:
double a, b, c;
double discriminant;
};

#endif		//QUADRATICEQUATION_H