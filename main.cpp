#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

#include"Hospital.h"
#include "Genral_Func.h"

int main()
{
	Hospital hos;
	int num = 0;
	while (num != 100)
	{
		Display_What_you_Want_To_do();
		cin >> num;
		cin.ignore();
		if (num == 1)
			hos.add_Medical_Department_To_The_Hospital();
		if (num == 2)
			hos.add_Nurse_To_The_Hospital();
		if (num == 3)
			hos.add_Doctor_To_The_Hospital();
		if (num == 4)
			hos.add_Visit_For_Patient();
		if (num == 5)
			hos.add_Researcher_To_The_hospital();
		if (num == 6)
			hos.add_Article_To_Researcher();
		if (num == 7)
			hos.Display_All_The_Patient_In_A_Medical_Department();
		if (num == 8)
			hos.Display_All_The_Medical_Stuff_In_The_Hospital();
		if (num == 9)
			hos.Display_All_The_Researcher_Stuff_In_The_Hospital();
		if (num == 10)
			hos.search_Display_Patient_In_The_Hospital_By_Id();
	}
}