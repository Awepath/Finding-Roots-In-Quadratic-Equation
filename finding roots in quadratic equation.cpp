// finding roots in quadratic equation.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int a, b, c;
int delta;
string decision;
double firstRoot, secondRoot;
void firstRoot_func();
void secondRoot_func();

int main()
{
	cout << "ax^2 + bx + c" << endl << endl;


	findRoot:

	while (1)
	{
		cout << "a: "; cin >> a; cout << endl;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, try again!" << endl << endl;
		}
		else
		{
			break;
		}
	}
	while (1)
	{
		cout << "b: "; cin >> b; cout << endl;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, try again!" << endl << endl;
		}
		else
		{
			break;
		}
	}
	while (1)
	{
		cout << "c: "; cin >> c; cout << endl;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input, try again!" << endl << endl;
		}
		else
		{
			break;
		}
	}


	delta = (b*b) - (4 *a*c);
	cout << endl<<"Delta : " << delta << endl << endl;;
	
	if (delta > 0)
	{
		cout << "There are two roots because Delta > 0"<<endl;
		firstRoot_func();
		secondRoot_func();
	}
	else if (delta == 0)
	{
		cout << "There is only one root because Delta = 0"<<endl;
		firstRoot_func();	
	}
	else
	{
		cout << "There is no root because Delta < 0" << endl << endl;
	}


	while (1)
	{
		cout << "Do you want to continue? (Y/N)" << endl << endl;;
		cin >> decision;
		if (decision == "Y" || decision == "y")
		{
			
			goto findRoot;
		}
		else if (decision == "N" || decision == "n")
		{
			return 0;
		}

	}

}

void firstRoot_func()
{
	double k = pow(delta, 0.5);
	firstRoot = (-b + k) / (2 * a);
	cout << "First Root: " << firstRoot << " or " << "(-" << b << "+" << (unsigned char)251 << delta << ")/(" << 2 * a << ")" << endl;
}

void secondRoot_func()
{
	double k = pow(delta, 0.5);
	secondRoot = (-b - k) / (2 * a);
	cout << "Second Root: " << secondRoot << " or " << "(-" << b << "-" << (unsigned char)251 << delta << ")/(" << 2 * a << ")" << endl;
}

