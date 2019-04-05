
#ifndef __Visit__h
#define __Visit__h
#include "Genral_Func.h"
#include "Patient.h"
#include "Date.h"
#include "MedicalDepartment.h"
#include "Doctor.h"


class VisitCard
{
private:
	Patient *the_Patient;
	Date *date_Of_Arrivel;
	MedicalDepartment *the_MedicalDepartment_Of_The_Visit;
	Doctor *head_Doctor;
	char* the_Purpose_Of_The_Visit;

public:
	Doctor *get_Head_Doctor()								const;
	MedicalDepartment *get_The_Purpuse_Of_The_Visit()		const;
	Date *get_Date_Of_Arrivel()								const;


	VisitCard(Patient *the_Patient_Of_The_Visit_Card, MedicalDepartment *the_Medical_Department,Doctor *the_Head_Doctor_Of_The_Visit_Card);
	~VisitCard();


};
#endif //__Visit__h
