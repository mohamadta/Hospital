

#ifndef __Doctor__h
#define __Doctor__h

#include "Genral_Func.h"

class Doctor
{
private:
	char*name;
	int id;
	char* specialty;
	int static id_Number_of_Doctor;

public:
	char* getName()			const;
	int getId()				const;
	char* getSpecialty()	const; 
	Doctor();
	~Doctor();

};
#endif //__Doctor__h
