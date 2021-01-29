/**
* @description Bu programda heap bellek bölgesinde çeþitli nesneler oluþturulur ve pointerler ile nesnelerin yönetilmesi saðlanýr.
* @course 1. Öðretim- B Grubu
* @assignment 1. Ödev
* @date 01.11.2019
* @author Davud Samed Tombul- b171210007@sakarya.edu.tr
*/
#include <Windows.h>
#include "Kova.hpp"
#include"KovaKontrol.hpp"
#include <iostream>
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

KovaKontrol::KovaKontrol(int kovasayisi)
{
	this->kovasayisi = kovasayisi;
	Kovadizisi = new Kova * [this->kovasayisi];
}

void KovaKontrol::kovalariolustur()
{
	for (int i = 0; i < this->kovasayisi; i++)
	{
		Kovadizisi[i] = new Kova;
	}
}

void KovaKontrol::kovalaribas()
{
	for (int i = 0; i < this->kovasayisi; i++)
	{

		SetConsoleTextAttribute(hConsole, Kovadizisi[i]->Kova::rengibas());
		cout << i + 1 << "." << "Kova" << endl;
		Kovadizisi[i]->Kova::kovabas();
	}
}

void KovaKontrol::toplarikoy()
	{
		for (int i = 0; i < kovasayisi; i++)
		{
			Kovadizisi[i]->topolustur();
		}

	}

void KovaKontrol::toplarisil()
{
	for (int i = 0; i < kovasayisi; i++)
	{
		Kovadizisi[i]->topsil();
	}
}

void KovaKontrol::kovalariterstenyerlestir()
{
	for (int i = 0; i < kovasayisi/2; i++)
	{
		Kova* temp;
		temp = Kovadizisi[i];
		Kovadizisi[i] = Kovadizisi[kovasayisi - i - 1];
		Kovadizisi[kovasayisi - i - 1] = temp;
	}
}
void KovaKontrol::kovalaridegis(int a, int b)
{
	Kova* kutu;
	kutu = Kovadizisi[a - 1];

	Kovadizisi[a-1] = Kovadizisi[b - 1];
	
	Kovadizisi[b - 1] = kutu;
	
}
void KovaKontrol::toplaridegis(int a,int b)
{

	Top* kutu=Kovadizisi[a - 1]->topadresal();

	Kovadizisi[a - 1]->setadres(Kovadizisi[b - 1]->topadresal());

	Kovadizisi[b - 1]->setadres(kutu);
}

void KovaKontrol::toplariterstenyerlestir()
{
	for (int i = 0; i < kovasayisi/2; i++)
	{
		Top* gecici;
		gecici = Kovadizisi[i]->topadresal();
		Kovadizisi[i]->setadres(Kovadizisi[kovasayisi - i - 1]->topadresal());
		Kovadizisi[kovasayisi - i - 1]->setadres(gecici);
	}
}


KovaKontrol::~KovaKontrol()
{
	for (int i = 0; i <kovasayisi ; i++)
	{
		delete Kovadizisi[kovasayisi];
	}

	delete[] Kovadizisi;
}