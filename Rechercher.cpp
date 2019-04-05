#include "Researcher.h"



char *Researcher::getName()const
{
	return name;
}
Researcher::Researcher()
{
	arr_Of_Articles = nullptr;
	number_Of_Articale_The_Researcher_Wrote = 0;
	cout << "enter the name of the Researcher: ";
	name = getNameFromTheUser();
}
void Researcher::add_Article_To_Researcher()
{
	Article **new_arr_of_Articles = new Article*[number_Of_Articale_The_Researcher_Wrote + 1];
	for (int i = 0; i < number_Of_Articale_The_Researcher_Wrote; i++)
		new_arr_of_Articles[i] = arr_Of_Articles[i];
	delete[]arr_Of_Articles;
	arr_Of_Articles = new_arr_of_Articles;

	arr_Of_Articles[number_Of_Articale_The_Researcher_Wrote] = new Article();
	number_Of_Articale_The_Researcher_Wrote++;
}
Researcher::~Researcher()
{
	delete[]name;
	for (int i = 0; i < number_Of_Articale_The_Researcher_Wrote; i++)
		delete arr_Of_Articles[i];
	delete[]arr_Of_Articles;
}