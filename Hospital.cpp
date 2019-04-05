#pragma warning(disable: 4996)
#include <iostream>
using namespace std;
#include "Hospital.h"




void Hospital::add_Medical_Department_To_The_Hospital()
{

	MedicalDepartment **new_arr_of_Medical_Department = new MedicalDepartment*[number_Of_Medical_Department_In_Hospital + 1];
	for (int i = 0; i < number_Of_Medical_Department_In_Hospital; i++)
		new_arr_of_Medical_Department[i] = arr_of_Medical_Department[i];
	delete[]arr_of_Medical_Department;
	arr_of_Medical_Department = new_arr_of_Medical_Department;
	arr_of_Medical_Department[number_Of_Medical_Department_In_Hospital]= new MedicalDepartment();
	number_Of_Medical_Department_In_Hospital++;

}
//1 v
void Hospital::add_Nurse_To_The_Hospital()//the func update Hospital and Medical Department
{
	int index_Of_Medical_Department_To_Put_The_Nurse;

	Nurse **new_arr_of_Nurse = new Nurse*[number_Of_Nurse_In_Hospital + 1];
	for (int i = 0; i < number_Of_Nurse_In_Hospital; i++)
		new_arr_of_Nurse[i] = arr_of_Nurse[i];
	delete[]arr_of_Nurse;
	arr_of_Nurse = new_arr_of_Nurse;

	do 
	{
		cout << "choose to Medical Department you want to add nurse: " << endl;
		this->print_The_Name_Of_All_Medical_Department();
		cout << number_Of_Medical_Department_In_Hospital + 1 << ")other \n";
		cin >> index_Of_Medical_Department_To_Put_The_Nurse;
		cin.ignore();
		if (number_Of_Medical_Department_In_Hospital + 1 == index_Of_Medical_Department_To_Put_The_Nurse)
			this->add_Medical_Department_To_The_Hospital();
	} while (!(index_Of_Medical_Department_To_Put_The_Nurse > 0 && index_Of_Medical_Department_To_Put_The_Nurse < number_Of_Medical_Department_In_Hospital + 2));

	index_Of_Medical_Department_To_Put_The_Nurse--;
	arr_of_Nurse[number_Of_Nurse_In_Hospital] = new Nurse();
	arr_of_Medical_Department[index_Of_Medical_Department_To_Put_The_Nurse]->add_Nurse_In_The_Medical_Department(arr_of_Nurse[number_Of_Nurse_In_Hospital]);
	number_Of_Nurse_In_Hospital++;
}
//2 v
void Hospital::add_Doctor_To_The_Hospital()
{
	int index_Medical_Department_To_Put_Doctor;

	Doctor **new_arr_of_Doctor = new Doctor*[number_Of_Doctor_In_Hospital + 1];
	for (int i = 0; i < number_Of_Doctor_In_Hospital; i++)
		new_arr_of_Doctor[i] = arr_Of_All_Doctor[i];
	delete[]arr_Of_All_Doctor;
	arr_Of_All_Doctor = new_arr_of_Doctor;

	do
	{
		cout << "choose to Medical Department you want to add Doctor: " << endl;
		this->print_The_Name_Of_All_Medical_Department();
		cout << number_Of_Medical_Department_In_Hospital + 1 << ")other \n";
		cin >> index_Medical_Department_To_Put_Doctor;
		cin.ignore();
		if (number_Of_Medical_Department_In_Hospital + 1 == index_Medical_Department_To_Put_Doctor)
			this->add_Medical_Department_To_The_Hospital();
	} while (!(index_Medical_Department_To_Put_Doctor > 0 && index_Medical_Department_To_Put_Doctor < number_Of_Medical_Department_In_Hospital + 2));

	index_Medical_Department_To_Put_Doctor--;
	arr_Of_All_Doctor[number_Of_Doctor_In_Hospital] = new Doctor();
	arr_of_Medical_Department[index_Medical_Department_To_Put_Doctor]->add_Doctor_In_The_Medical_Department(arr_Of_All_Doctor[number_Of_Doctor_In_Hospital]);
	number_Of_Doctor_In_Hospital++;


}
//3 v
void Hospital::add_Visit_For_Patient()
{
	char yes_Or_No;

	Patient *single_Patient = nullptr;
	int index_Of_Medical_Department;

	Doctor *head_Doctor;
	int index_The_Doctor_You_Want;

	VisitCard *new_Visit_Card;

	do
	{
		cout << "the Patient was in the hospital in the past \nN for no\nY for yes\n";;
		cin >> yes_Or_No;
	} while (yes_Or_No != 'Y' && yes_Or_No != 'N');
	if (yes_Or_No == 'Y')
	{
		cout << "what is the id of the Patient:";
		single_Patient = arr_of_Patient[this->search_Patient_In_The_Hospital_By_Id()];
		single_Patient->get_Medical_Department_Patient_In()->remove_Patient_From_The_Medical_Department(single_Patient);

	}
	else
	{
		cin.ignore();
		single_Patient = new Patient();
	}

	cout << "to which Medical Department you came for:\n";
	this->print_The_Name_Of_All_Medical_Department();
	cin >> index_Of_Medical_Department;
	index_Of_Medical_Department--;
	cin.ignore();

	cout << "which doctor you want:\n";
	arr_of_Medical_Department[index_Of_Medical_Department]->Display_All_The_Doctor_In_The_Department();
	cin >> index_The_Doctor_You_Want;
	cin.ignore();
	head_Doctor = arr_of_Medical_Department[index_Of_Medical_Department]->get_Doctor_From_The_Department(index_The_Doctor_You_Want - 1);

	new_Visit_Card = new VisitCard(single_Patient, arr_of_Medical_Department[index_Of_Medical_Department], head_Doctor);
	single_Patient->add_Visit(new_Visit_Card);

	if(yes_Or_No == 'N')
		this->add_Patient_To_Arr_Of_Hospital(single_Patient);//update hospital
	arr_of_Medical_Department[index_Of_Medical_Department]->add_Patient_To_Medical_Department(single_Patient);//update Medical Department

};
//4 v
void Hospital::print_The_Name_Of_All_Medical_Department()const
{
	for (int i = 0; i < number_Of_Medical_Department_In_Hospital; i++)
		cout << i + 1 << ")" << arr_of_Medical_Department[i]->getName() << endl;
}

void Hospital::add_Researcher_To_The_hospital()
{
	Researcher **new_arr_of_Researcher = new Researcher*[number_Of_Researcher_In_Hospital + 1];
	for (int i = 0; i < number_Of_Researcher_In_Hospital; i++)
		new_arr_of_Researcher[i] = arr_of_Researcher[i];
	delete[]arr_of_Researcher;
	arr_of_Researcher = new_arr_of_Researcher;

	arr_of_Researcher[number_Of_Researcher_In_Hospital] = new Researcher();
	number_Of_Researcher_In_Hospital++;
}
//5 v
void Hospital::add_Article_To_Researcher()
{
	int index_Of_Researcher_To_Add_The_Article;
	this->Display_All_The_Researcher_Stuff_In_The_Hospital();
	cin >> index_Of_Researcher_To_Add_The_Article;
	index_Of_Researcher_To_Add_The_Article--;

	arr_of_Researcher[index_Of_Researcher_To_Add_The_Article]->add_Article_To_Researcher();
}
//6 
void Hospital::Display_All_The_Patient_In_A_Medical_Department()const
{
	int index_Medical_Department_To_Print;
	cout << "Choose one of the medical department in the hospital:\n";
	this->print_The_Name_Of_All_Medical_Department();
	cin >> index_Medical_Department_To_Print;
	index_Medical_Department_To_Print--;
	cout << "The Medical Department is: " << arr_of_Medical_Department[index_Medical_Department_To_Print]->getName() << endl;
	cout << "The Patients are: \n";
	arr_of_Medical_Department[index_Medical_Department_To_Print]->print_All_Patient_In_The_Medical_Department();
}
//7 v
void Hospital::Display_All_The_Medical_Stuff_In_The_Hospital()const
{
	cout << "all the nurses in the hospital:\n";
	for (int i = 0; i < number_Of_Nurse_In_Hospital; i++)
		cout << i + 1 << ":" << arr_of_Nurse[i]->getName() << endl;
	cout << "all the doctors in the hospital:\n";
	for (int i = 0; i < number_Of_Doctor_In_Hospital; i++)
		cout << i + 1 << ":" << arr_Of_All_Doctor[i]->getName() << endl;
	this->Display_All_The_Researcher_Stuff_In_The_Hospital();
}
//8
void Hospital::Display_All_The_Researcher_Stuff_In_The_Hospital()const
{
	cout << "all the rechercher in the hospital:\n";
	for (int i = 0; i < number_Of_Researcher_In_Hospital; i++)
		cout << i + 1 << ")" << arr_of_Researcher[i]->getName() << endl;
}
//9 v
void Hospital::search_Display_Patient_In_The_Hospital_By_Id()
{
	cout << "the id you want to seach:";
	int index_Of_The_Id_Needed = this->search_Patient_In_The_Hospital_By_Id();
	cout << endl;
	if (index_Of_The_Id_Needed != -1)
	{
		cout << "the Name of the Patient is:" << arr_of_Patient[index_Of_The_Id_Needed]->getName();
		cout << "\nthe Medical Department of the Patient is:" << arr_of_Patient[index_Of_The_Id_Needed]->get_Medical_Department_Patient_In()->getName();
	}
	else
		cout << "\nthe Patient is not in the hospital";
	cout << endl;
}
//10 v
int Hospital::search_Patient_In_The_Hospital_By_Id()
{
	int id_Need_To_Search;
	cin >> id_Need_To_Search;
	cin.ignore();
	for (int i = 0; i < number_Of_Patient_In_Hospital; i++)
		if (id_Need_To_Search == arr_of_Patient[i]->getId())
			return i;
	return -1;
}
void Hospital::add_Patient_To_Arr_Of_Hospital(Patient *single_Patient)
{
	Patient **new_arr_of_Patient_Hospital = new Patient*[number_Of_Patient_In_Hospital + 1];
	for (int i = 0; i < number_Of_Patient_In_Hospital; i++)
		new_arr_of_Patient_Hospital[i] = arr_of_Patient[i];
	delete[]arr_of_Patient;
	arr_of_Patient = new_arr_of_Patient_Hospital;
	arr_of_Patient[number_Of_Patient_In_Hospital] = single_Patient;
	number_Of_Patient_In_Hospital++;
}

Hospital::Hospital()
{
	number_Of_Medical_Department_In_Hospital = 0;
	number_Of_Article_In_Hospital = 0;
	number_Of_Doctor_In_Hospital = 0;
	number_Of_Nurse_In_Hospital = 0;
	number_Of_Patient_In_Hospital = 0;
	number_Of_Researcher_In_Hospital = 0;

	arr_of_Medical_Department = nullptr;
	arr_Of_All_Doctor = nullptr;
	arr_of_Nurse = nullptr;
	arr_of_Patient = nullptr;
	arr_of_Researcher = nullptr;

}

Hospital::~Hospital()
{
	for (int i = 0; i < number_Of_Patient_In_Hospital; i++)
		delete arr_of_Patient[i];
	for (int i = 0; i < number_Of_Medical_Department_In_Hospital; i++)
		delete arr_of_Medical_Department[i];
	for (int i = 0; i < number_Of_Doctor_In_Hospital; i++)
		delete arr_Of_All_Doctor[i];
	for (int i = 0; i < number_Of_Nurse_In_Hospital; i++)
		delete arr_of_Nurse[i];
	for (int i = 0; i < number_Of_Researcher_In_Hospital; i++)
		delete arr_of_Researcher[i];
	delete arr_of_Researcher;
	delete[]arr_of_Medical_Department;
	delete[]arr_Of_All_Doctor;
	delete[]arr_of_Nurse;
	delete[]arr_of_Patient;
}