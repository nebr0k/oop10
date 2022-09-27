#include "Number.h"
#include <iostream>
using namespace std;


bool Number::Init(double f, double s, int m)
{
	if(s > 0) {
		first = f;
		second = s;
		mul = m;
		return true;
	}

	return true;
}
void Number::Read()
{
	double f;
	double s;
	int m;
	do
	{
		cout << "Enter a valid value:" << endl;
		cout << " first = "; cin >> f;
		cout << " second = "; cin >> s;
		cout << " mul = "; cin >> m;
	} while (!Init(f, s, m));

}

double Number::Multiply()
{
	double t;
	modf(first, &first);
	second = fabs(modf(second, &t));
	if (first < 0) {
		second = -second;
	}
	return (first + second) * mul;
}