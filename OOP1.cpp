
#include <iostream>
#include "Number.h"
using namespace std;

int main()
{
    Number a;
    a.Read();
    cout << "multiply = " << a.Multiply() << endl;
}