#pragma warning(disable: 4996)
#include <iostream>
using namespace std;
#include "Nurse.h"

int Nurse::id_Number_of_nurse = 1000;

char* Nurse::getName()const
{
	return name;
}
int Nurse::getId()const
{
	return id;
}
int Nurse::get_Year_Of_Expirence()const
{
	return year_Of_Expirence;
}
Nurse::~Nurse()
{
	delete[]name;
}
Nurse::Nurse()
{
	cout << "enter the name of the Nurse: ";
	name = getNameFromTheUser();
	do
	{ 
		cout << "enter how many years of expirence the Nurse have: ";
		cin >> year_Of_Expirence; 
		cin.ignore();
	} while (!(year_Of_Expirence > -1 || year_Of_Expirence < 50));//<= most time possible 
	id = id_Number_of_nurse;
	id_Number_of_nurse++;
}


