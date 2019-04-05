#pragma warning(disable: 4996)
#include <iostream>
using namespace std;

#include "VisitCard.h"


Date *VisitCard::get_Date_Of_Arrivel()const
{
	return date_Of_Arrivel;
}
Doctor *VisitCard::get_Head_Doctor()const
{
	return head_Doctor;
}

MedicalDepartment* VisitCard::get_The_Purpuse_Of_The_Visit()const
{
	return the_MedicalDepartment_Of_The_Visit;
}

 VisitCard::VisitCard(Patient *the_Patient_Of_The_Visit_Card, MedicalDepartment *the_Medical_Department, Doctor *the_Head_Doctor_Of_The_Visit_Card)
 {
	 the_Patient = the_Patient_Of_The_Visit_Card;
	 the_MedicalDepartment_Of_The_Visit = the_Medical_Department;
	 head_Doctor = the_Head_Doctor_Of_The_Visit_Card;
	 cout << "what is the purpose of the visit:\n";
	 the_Purpose_Of_The_Visit = getNameFromTheUser();
	 date_Of_Arrivel = new Date();
 }

 VisitCard::~VisitCard()
 {
	 delete date_Of_Arrivel;
	 delete[] the_Purpose_Of_The_Visit;
 }

