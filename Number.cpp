#include "Number.h"
#include <iostream>

using namespace std;

void Number::SetFirst(double value)
{
	first = floor(value);
}

void Number::SetSecond(double value1)
{
	second = value1;
}

bool Number::Init(double x, double y)
{
	first = floor(x);
	if (y >= 0)
	{
		y = y - floor(y);
		second = y;
		return true;
	}
	else
	{
		second = 0;
		return false;
	}
}

void Number::Display() const
{
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

void Number::Read()
{
	double x, y;
	cout << "first =  ";
	cin >> x;
	do {
		cout << "second =  ";
		cin >> y;
	} while (!Init(x, y));
}

void Number::multiply(double N)
{
	first *= N;
	second *= N;
}