// loop if statement pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{


	//first triangle
	for (int r = 0; r < 10; r++)
	{
		for (int c = 0; c < r; c++)
		{
			cout << "*";
		}
		cout << endl;
	}

	//second triangle
	for (int r = 10; r > 0; r--)
	{
		for (int c = 0; c < r; c++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("PAUSE");

	return 0;
}

