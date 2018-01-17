/*Pui Tam
Homework 1
CS 5040
*/

#include <iostream>
#include "QuadraticEquation.h"
#include <string>

using namespace std;

int main()
{
	string quadExpr[9];
	string user_input;
	int a, b, c;
	QuadraticEquation expression;
	
	cout << "What is Your 'a' Variable" << endl;
	cin >> a;
	cout << "What is Your 'b' Variable" << endl;
	cin >> b;
	cout << "What is Your 'c' Variable" << endl;
	cin >> c;
	expression.expression(a,b,c);
	
	cout << "Commands: Find Coefficient, Evaluate Specified Value, Number of Real Zeros, Real Zeros, Exit" << endl;
	getline(cin, user_input);
	
	while(user_input != "Exit")
	{
		if(user_input == "Find Coefficient")
		{
			expression.findCoefficient(a,b,c);
		}
		else if(user_input == "Evaluate Specified Value")
		{
			cout << "Which Coefficient Would You Like to Evaluate?" << endl;
			
		}
		else if(user_input == "Number of Real Zeros")
		{
			expression.numberOfZeros(a, b, c);
		}
		else if(user_input == "Real Zeros")
		{
			expression.realZeros(a, b, c);
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}
