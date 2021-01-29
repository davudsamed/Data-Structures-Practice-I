/**
* @description Bu programda heap bellek bölgesinde çeþitli nesneler oluþturulur ve pointerler ile nesnelerin yönetilmesi saðlanýr.
* @course 1. Öðretim- B Grubu
* @assignment 1. Ödev
* @date 01.11.2019
* @author Davud Samed Tombul- b171210007@sakarya.edu.tr
*/
#include "Top.hpp"
#include"Kova.hpp"
#include<iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

void Top::harfiata(char x)
{
	harf = x;
}

char Top::harfial()
{
	return harf;
}