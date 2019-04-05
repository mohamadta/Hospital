

#ifndef __Hospital__h
#define __Hospital__h
#pragma warning(disable: 4996)
#include <string>
#include <iostream>
#include <string>

using namespace std;

#include "Genral_Func.h"
#include"MedicalDepartment.h"
#include "Article.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include "Researcher.h"
#include "VisitCard.h"
using namespace std;


class Hospital
{
private:
	int number_Of_Medical_Department_In_Hospital;
	int number_Of_Article_In_Hospital;
	int number_Of_Doctor_In_Hospital;
	int number_Of_Nurse_In_Hospital;
	int number_Of_Patient_In_Hospital;
	int number_Of_Researcher_In_Hospital;


	MedicalDepartment **arr_of_Medical_Department;
	Doctor **arr_Of_All_Doctor;
	Nurse **arr_of_Nurse;
	Patient **arr_of_Patient;
	Researcher **arr_of_Researcher;



public:
	void print_The_Name_Of_All_Medical_Department()const;

	void add_Medical_Department_To_The_Hospital();//1
	void add_Nurse_To_The_Hospital();//2
	void add_Doctor_To_The_Hospital();//3
	void add_Visit_For_Patient();//4
	void add_Researcher_To_The_hospital();//5
	void add_Article_To_Researcher();//6
	void Display_All_The_Patient_In_A_Medical_Department()const;//7
	void Display_All_The_Medical_Stuff_In_The_Hospital()const;//8
	void Display_All_The_Researcher_Stuff_In_The_Hospital()const;//9
	void search_Display_Patient_In_The_Hospital_By_Id();//10

	int search_Patient_In_The_Hospital_By_Id();
	void add_Patient_To_Arr_Of_Hospital(Patient *single_Patient);
	Hospital();
	~Hospital();
};

#endif //__Hospital__h