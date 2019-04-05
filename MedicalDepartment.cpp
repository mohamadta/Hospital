#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

#include "MedicalDepartment.h"



char *MedicalDepartment::getName()const
{
	return name;
}

void MedicalDepartment::Display_All_Stuff_In_The_Department()const
{
	this->Display_All_The_Doctor_In_The_Department();
	this->Display_All_The_Nurse_In_The_Department();
}
void MedicalDepartment::Display_All_The_Doctor_In_The_Department()const
{
	cout << "all the doctors in the Department:\n";
	for (int i = 0; i < number_Of_Doctor_In_Medical_Department; i++)
		cout << i + 1 << ")" << arr_Of_Doctor_In_Medical_Department[i]->getName() << endl;
}
void MedicalDepartment::Display_All_The_Nurse_In_The_Department()const
{
	cout << "all the nurses in the Department:\n";
	for (int i = 0; i < number_Of_Doctor_In_Medical_Department; i++)
		cout << i + 1 << ")" << arr_Of_Nurse_In_Medical_Department[i]->getName() << endl;
}
MedicalDepartment::MedicalDepartment()
{
	cout << "please enter the name of the new Medical Department: ";
	name = getNameFromTheUser();
	number_Of_Doctor_In_Medical_Department = 0;
	number_Of_Nurse_In_Medical_Department = 0;
	number_Of_Patient_In_Medical_Department = 0;
	arr_Of_Doctor_In_Medical_Department = nullptr;
	arr_Of_Nurse_In_Medical_Department = nullptr;
	arr_Of_Patient_In_Medical_Department = nullptr;
}
MedicalDepartment::~MedicalDepartment()
{
	delete[]name;
	delete[]arr_Of_Doctor_In_Medical_Department;
	delete[]arr_Of_Nurse_In_Medical_Department;
	delete[]arr_Of_Patient_In_Medical_Department;
}
void MedicalDepartment::add_Nurse_In_The_Medical_Department(Nurse *new_Nurse)
{
	Nurse **new_arr_of_Nurse = new Nurse*[number_Of_Nurse_In_Medical_Department + 1];
	for (int i = 0; i < number_Of_Nurse_In_Medical_Department; i++)
		new_arr_of_Nurse[i] = arr_Of_Nurse_In_Medical_Department[i];
	delete[]arr_Of_Nurse_In_Medical_Department;
	arr_Of_Nurse_In_Medical_Department = new_arr_of_Nurse;
	arr_Of_Nurse_In_Medical_Department[number_Of_Nurse_In_Medical_Department] = new_Nurse;
	number_Of_Nurse_In_Medical_Department++;
}
void MedicalDepartment::add_Doctor_In_The_Medical_Department(Doctor *new_Doctor)
{
	Doctor **new_arr_of_Doctor = new Doctor*[number_Of_Doctor_In_Medical_Department + 1];
	for (int i = 0; i < number_Of_Doctor_In_Medical_Department; i++)
		new_arr_of_Doctor[i] = arr_Of_Doctor_In_Medical_Department[i];
	delete[]arr_Of_Doctor_In_Medical_Department;
	arr_Of_Doctor_In_Medical_Department = new_arr_of_Doctor;
	arr_Of_Doctor_In_Medical_Department[number_Of_Doctor_In_Medical_Department] = new_Doctor;
	number_Of_Doctor_In_Medical_Department++;
}
Doctor* MedicalDepartment::get_Doctor_From_The_Department(int index)const
{
	return arr_Of_Doctor_In_Medical_Department[index];
}
void MedicalDepartment::add_Patient_To_Medical_Department(Patient *new_Patient)
{
	Patient **new_arr_Of_Patient_In_Medical_Department = new Patient*[number_Of_Patient_In_Medical_Department + 1];
	for (int i = 0; i < number_Of_Patient_In_Medical_Department; i++)
		new_arr_Of_Patient_In_Medical_Department[i] = arr_Of_Patient_In_Medical_Department[i];
	delete[]arr_Of_Patient_In_Medical_Department;
	arr_Of_Patient_In_Medical_Department = new_arr_Of_Patient_In_Medical_Department;
	arr_Of_Patient_In_Medical_Department[number_Of_Patient_In_Medical_Department] = new_Patient;
	number_Of_Patient_In_Medical_Department++;
}
void MedicalDepartment::print_All_Patient_In_The_Medical_Department()const
{
	for (int i = 0; i < number_Of_Patient_In_Medical_Department; i++)
		cout << i + 1 << ")" << arr_Of_Patient_In_Medical_Department[i]->getName() << endl;
}
void MedicalDepartment::remove_Patient_From_The_Medical_Department(Patient *del_Patient)
{
	Patient **new_arr_Of_Patient_In_Medical_Department = new Patient*[number_Of_Patient_In_Medical_Department + 1];
	for (int i = 0; i < number_Of_Patient_In_Medical_Department; i++)
		if (arr_Of_Patient_In_Medical_Department[i] != del_Patient)
			new_arr_Of_Patient_In_Medical_Department[i] = arr_Of_Patient_In_Medical_Department[i];

	delete[]arr_Of_Patient_In_Medical_Department;
	arr_Of_Patient_In_Medical_Department = new_arr_Of_Patient_In_Medical_Department;
	number_Of_Patient_In_Medical_Department--;
}