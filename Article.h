#ifndef __Article__h
#define __Article__h
#include "Genral_Func.h"

#include"Date.h"

class Article 
{
private:
	Date *date;
	char *name_Of_The_Article;
	char *name_Of_The_Magzin_Article_publish;

public:
	char*getName_Of_The_Article()					const;
	char*getName_Of_The_Magzin_Article_publish()	const;

	Article();
	~Article();

};
#endif //__Article__h
