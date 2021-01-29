/**
* @description Bu programda heap bellek bölgesinde çeþitli nesneler oluþturulur ve pointerler ile nesnelerin yönetilmesi saðlanýr.
* @course 1. Öðretim- B Grubu
* @assignment 1. Ödev
* @date 01.11.2019
* @author Davud Samed Tombul- b171210007@sakarya.edu.tr
*/
#ifndef KOVA_HPP
#define KOVA_HPP
#include "Top.hpp"

class Kova
{
private:
	int kovarengi;
	Top* Toop;

public:

	Kova();

	void topolustur();

	int  rengibas();

	void kovabas();

	void topsil();

	Top* topadresal();

	Top* setadres(Top*);
};
#endif