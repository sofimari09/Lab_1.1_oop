#include <iostream>
#include "Number.h"

using namespace std;

Number makeNumber(double x, double y)
{
	Number s;
	if (!s.Init(x, y))
		cout << "wrong argument to Init (second)" << endl;

	return s;
}

int main()
{
	Number n;
	n.Init(10.01, 5.31);
	n.Display();
	n.multiply(0.2);
	n.Display();

	Number k;
	k.Read();
	k.Display();
	k.multiply(0.5);
	k.Display();

	Number i;
	double a, b;
	cout << "first_m =  ";
	cin >> a;
	cout << "second_m =  ";
	cin >> b;
	i = makeNumber(a, b);
	i.Display();
	return 0;
}