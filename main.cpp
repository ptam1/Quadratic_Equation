/*Pui Tam
Homework 1
CS 5040
*/
#include "QuadraticEquation.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
   
	string user_input;
	double a, b, c;
	double x;
	QuadraticEquation expression;
	
	cout << "What is Your 'a' Variable" << endl;
	cin >> a;	
	cout << "What is Your 'b' Variable" << endl;
	cin >> b;
	cout << "What is Your 'c' Variable" << endl;
	cin >> c;
	expression.expression(a,b,c);
	cin.ignore();
	cout << "Type a Command. " << "Commands: Find Coefficient, Evaluate Specified Value, Number of Real Zeros, Real Zeros, Exit" << endl;
	getline(cin, user_input);
	
	while(user_input != "Exit")
	{
		if(user_input == "Find Coefficient")
		{
			expression.findCoefficient(a,b,c);
		}
		else if(user_input == "Evaluate Specified Value")
		{
			cout << "What is the 'x' Value You Want To Enter?" << endl;
			cin >> x;
			expression.evalExpression(x, a, b, c);
		    cin.ignore();	
		}
		else if(user_input == "Number of Real Zeros")
		{
			expression.numberOfZeros(a, b, c);
		}
		else if(user_input == "Real Zeros")
		{
			expression.realZeros(a, b, c);
		}
		else
		{
			cout << " Enter A Valid Command!" << endl;
			getline(cin, user_input);
		}
		
		cout << "Enter Another Command." << endl;
		getline(cin, user_input);
	}
	
	return 0;
}
