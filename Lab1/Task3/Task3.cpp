
#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int random_value;
	random_value = 1 + rand() % 100;
	system("pause");
	int number;
	cout << "Hi. Try to guess a number." << endl;
	cin >> number;
	if ((number) != (random_value))
	{
		while ((number) != (random_value))
			if ((number) > (random_value))
			{
				cout << "No.Less." << endl;
				cin >> number;
			}
			else
			{
				cout << "No.Greater." << endl;
			}
	}
	else {
		cout << "Yeah, you're right." << endl;
	}
	cout << "Yeah you're right." << endl;
	return(0);
}
	
