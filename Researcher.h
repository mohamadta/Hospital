
#ifndef __Researcher__h
#define __Researcher__h

#include"Article.h"
#include "Genral_Func.h"

class Researcher
{
private:
	char*name;
	int number_Of_Articale_The_Researcher_Wrote;
	Article **arr_Of_Articles;
	

public:
	char* getName()										const;
	void add_Article_To_Researcher();

	Researcher();
	~Researcher();


};
#endif //__Researcher__h
