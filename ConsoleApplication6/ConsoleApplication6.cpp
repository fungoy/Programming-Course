// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int celsius;
	cout << "Enter the temperature in celsius: ";
	cin >> celsius;

	int factor;
	factor = 212 - 32;

	int fahrenheit;
	fahrenheit = factor*celsius / 100 + 32;

	cout << "Fahrenheit value is: ";
	cout << fahrenheit << endl;
	system("PAUSE");
	
	return 0;
}