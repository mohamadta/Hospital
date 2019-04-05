#ifndef __Patient __h
#define __Patient __h


#include"Doctor.h"
#include "Genral_Func.h"

class VisitCard;
class MedicalDepartment;

class Patient
{
private:
	char*name;
	int id;
	char sex;
	int year_Of_Birth;
	int number_Of_Visits;
	VisitCard **arr_Of_Visits;

public:
	char *getName()													const;
	int getId()														const;
	int getSex()													const;
	MedicalDepartment* get_Medical_Department_Patient_In()		    const;
	void add_Visit(VisitCard * new_Visit_Card);
	VisitCard **get_Arr_Of_Visit() 									const;
	int get_Number_Of_Visits()										const;

	Patient();
	~Patient();

};

#endif //__Patient __h