
#ifndef __Nurse__h
#define __Nurse__h
#include "Genral_Func.h"


class Nurse
{

private:
	char*name;
	int id;
	int year_Of_Expirence;
	static int id_Number_of_nurse;


public:
	char* getName()				const;
	int getId()					const;
	int get_Year_Of_Expirence()	const;


	Nurse();
	~Nurse();

};


#endif //__Nurse__h
