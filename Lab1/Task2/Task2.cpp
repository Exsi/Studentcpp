
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char name[255]; 
	int month, year, day, age;
	cout << "Как вас зовут?" << '\n';
	cin >> name;
	cout << "В каком году вы родились?" << '\n';
	cin >> year;
	cout << "В каком месяце вы родились?" << '\n';
	cin >> month;
	cout << "В какой день вы родились?" << '\n';
	cin >> day;
	if ((day > 7) and (month >= 11) and (year >= 2000))
	{
		int p = 2017;
		age = (p - year);
	}
	else
	{
		int p = 2018;
			age = (p - year);
	}
	cout << "Hello, " << name << "! You are " << age << " old.";
	return 0;
}
