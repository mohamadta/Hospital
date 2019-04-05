#pragma warning(disable: 4996)
#include <iostream>
using namespace std;


#include "Patient.h"
#include "VisitCard.h"

char* Patient::getName()const
{
	return name;
}
int Patient::getId()const
{
	return id;
}
int Patient::getSex()const
{
	return (int)sex;
}
Patient::Patient()
{
	cout << "please enter the name of the patient:";
	name = getNameFromTheUser();
	cout <<  "please enter the id of the patient:";
	cin >> id;
	cout <<  "please enter the year of birth of the patient:";
	cin >> year_Of_Birth;
	do
	{
		cout << "please enter the SEX of the patient \nM for Male\nW for Woman\n";
		cin >> sex;
		cin.ignore();
	} while (sex != 'M' && sex != 'W');
	number_Of_Visits = 0;
	arr_Of_Visits = nullptr;
}

Patient::~Patient()
{
	for (int i = 0; i < number_Of_Visits; i++)
		delete arr_Of_Visits[i];
	delete[]arr_Of_Visits;
	delete[] name;
}

void Patient::add_Visit(VisitCard *new_Visit_Card)
{
	VisitCard **new_arr_Of_Visits = new VisitCard*[number_Of_Visits+1];
	for (int i = 0; i < number_Of_Visits; i++)
		new_arr_Of_Visits[i] = arr_Of_Visits[i];
	delete[] arr_Of_Visits;
	arr_Of_Visits = new_arr_Of_Visits;
	arr_Of_Visits[number_Of_Visits] = new_Visit_Card;
	number_Of_Visits++;
}
MedicalDepartment *Patient::get_Medical_Department_Patient_In()const
{
	return this->get_Arr_Of_Visit()[number_Of_Visits - 1]->get_The_Purpuse_Of_The_Visit();
}
VisitCard ** Patient::get_Arr_Of_Visit()const
{
	return arr_Of_Visits;
}
int Patient::get_Number_Of_Visits()const
{
	return number_Of_Visits;
}