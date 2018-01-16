/*Pui Tam
Homework 1
CS 5040
*/


#ifndef QUADRATICEQUATION_H_INCLUDED
#define QUADRATICEQUATION_H_INCLUDED

using namespace std;


class QuadraticEquation
{
	public:
	QuadraticEquation();
	~QuadraticEquation();
//Constructor
void quadraticEquation(int a, int b, int c);

//
void quadraticFormula(int a, int b, int c);
void expression(int a, int b, int c);
void evalExpression();
void findCoefficient(int num, string expression[]);
int numberOfZeros();
int realZeros();


private:
int a, b, c;
int x;
string expression;
};

#endif		//QUADRATICEQUATION_H