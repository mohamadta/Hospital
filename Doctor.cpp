#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

#include "Doctor.h"

int Doctor::id_Number_of_Doctor = 2000;
Doctor::Doctor()
{
	cout << "enter the name of the doctor:";
	name = getNameFromTheUser();
	cout << "enter the specialty of the doctor:";
	specialty = getNameFromTheUser();
	id = id_Number_of_Doctor;
	id_Number_of_Doctor++;

}
char* Doctor::getName()const
{
	return name;
}
int Doctor::getId()const
{
	return id;
}
char *Doctor::getSpecialty() const
{
	return getNameFromTheUser();
}
Doctor::~Doctor()
{
	delete[]name;
	delete[]specialty;
}

