// loop if statement pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string x = "";
	int counter = 0;
	
	do{
		counter++;
		if(counter>10){ // if there are already 10x * in x
			x.pop_back(); // this erases the last character in the string
			cout << x << "\n"; // write x with an enter in the end
		}else{ // if there arent 10x * in x
			x+="*"; //x = x + "*"
			cout << x << "\n";
		}
	}while(counter<20);
}
}

