#pragma warning(disable: 4996)
#include <iostream>
using namespace std;
#include "Genral_Func.h"

#define lenght_Of_Input 30

char *getNameFromTheUser()
{
	char*name = new char[lenght_Of_Input + 1];
	cin.getline(name, lenght_Of_Input);
	int log_Size = strlen(name)+1;
	char *newName = new char[log_Size];
	for (int i = 0; i < log_Size; i++)
		newName[i] = name[i];
	delete[]name;
	name = newName;
	return name;
}

void Display_What_you_Want_To_do()
{
	cout << "press 1 to add Medical Department to the hospital\n";
	cout << "press 2 to add a nurse to Medical Department\n";
	cout << "press 3 to add a doctor to Medical Department\n";
	cout << "press 4 to visit from Patient\n";
	cout << "press 5 to add researcher to the institute\n";
	cout << "press 6 to add article to researcher\n";
	cout << "press 7 to display all Patients\n";
	cout << "press 8 to display all Medical staff in the hospital\n";
	cout << "press 9 to display all researcher\n";
	cout << "press 10 to search a Patient by id and to print the Medical Department he is in\n";
	cout << "press 100 to exit the program\n";
}
