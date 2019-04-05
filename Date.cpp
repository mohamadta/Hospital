#pragma warning(disable: 4996)
#include <iostream>
using namespace std;


#include "Date.h"



void Date::printDate()	const
{
	cout << day << "//" << "month" << "//" << year;
}
Date::Date()
{
	do
	{
		cout << "please enter the day:";
		cin >> day;
		cin.ignore();
	} while (day > 30 || day < 1);//i assum there is between 1 to 30 day in every month
	do 
	{
		cout << "please enter the month:";
		cin >> month;
		cin.ignore();
	} while (month > 12 || day < 1);
	do
	{
		cout << "please enter the year:";
		cin >> year;
		cin.ignore();
	} while (year > 2019 || year < 1899);//i assum there is 120 valid years
}