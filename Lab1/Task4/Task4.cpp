
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char c = 'y';

	while ((c) == 'y')
	{
		cout << "Hello, my dear. What are the numbers?" << endl;
		cin >> num1, cin >> num2;
		cout << "Number 1: " << num1 << "\n" << "Number 2: " << num2 << "\n";
		int a;
		cout << "What do you want to do?\n" << "1. +\n" << "2. n" << "3. *\n" << "4. /\n";
		cin >> a; cout << "Your answer: " << a << endl;
		int b;
		if ((a) == 1)
		{
			b = ((num1)+(num2));
		}
		else {
			if ((a) == 2)
			{
				b = ((num1)-(num2));
			}
			else {
				if ((a) == 3)
				{
					b = ((num1)*(num2));
				}
				else
				{
					b = ((num1) / (num2));
				}
			}
		}
		cout << "Result = " << b << endl;
		cout << "\n" << "Do you want to try again? y/n\n";
		cin >> c;
		return(0);
	}
}

