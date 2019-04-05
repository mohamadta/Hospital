
#ifndef __MedicalDepartment__h
#define __MedicalDepartment__h

#include "Genral_Func.h"
#include"Doctor.h"
#include"Nurse.h"
#include"Patient.h"

class MedicalDepartment
{
private:

	char *name;
	int number_Of_Doctor_In_Medical_Department;
	int number_Of_Nurse_In_Medical_Department;
	int number_Of_Patient_In_Medical_Department;


	Doctor **arr_Of_Doctor_In_Medical_Department;
	Nurse **arr_Of_Nurse_In_Medical_Department;
	Patient **arr_Of_Patient_In_Medical_Department;

public:

	char* getName()const;

	void Display_All_Stuff_In_The_Department()const;
	void Display_All_The_Doctor_In_The_Department()const;
	void Display_All_The_Nurse_In_The_Department()const;

	Doctor *get_Doctor_From_The_Department(int index)const;

	void remove_Patient_From_The_Medical_Department(Patient *del_Patient);
	void add_Nurse_In_The_Medical_Department(Nurse *new_Nurse);
	void add_Doctor_In_The_Medical_Department(Doctor *new_Doctor);
	void add_Patient_To_Medical_Department(Patient *new_Patient);
	void print_All_Patient_In_The_Medical_Department()const;
	MedicalDepartment();
	~MedicalDepartment();
};

#endif //__MedicalDepartment__h
