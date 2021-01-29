/**
* @description Bu programda heap bellek bölgesinde çeşitli nesneler oluşturulur ve pointerler ile nesnelerin yönetilmesi sağlanır.
* @course 1. Öğretim- B Grubu
* @assignment 1. Ödev
* @date 01.11.2019
* @author Davud Samed Tombul- b171210007@sakarya.edu.tr
*/
#include <locale.h>
#include <Windows.h>
#include <iomanip>
#include <time.h>
#include <cstdlib>
#include "KovaKontrol.hpp"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int secenek=1, kovaadedi;

	cout << "Kova Sayisi:";

	cin >> kovaadedi;

	KovaKontrol* a = new KovaKontrol(kovaadedi);

	a->kovalariolustur();

	a->kovalaribas();
	
	do
	{
		cout << "İşlemler" << endl;
		cout << "[1] Toplari Yerlestir" << endl;
		cout << "[2] Toplari Yoket" << endl;
		cout << "[3] Kova Degistir" << endl;
		cout << "[4] Top Degistir" << endl;
		cout << "[5] Kovalari Tersten Yerlestir" << endl;
		cout << "[6] Toplari Tersten Yerlestir" << endl;
		cout << "[7] Cikis" << endl;
		cout << ">>";

		cin >> secenek;

		switch (secenek)
		{
		case 1:

			a->toplarikoy();

			a->kovalaribas();

			break;
		case 2:

			a->toplarisil();

			a->kovalaribas();

			break;
		case 3:

			int kova1, kova2;
			cout << "Değiştirmek istediğiniz kova numaralarını yazınız" << endl;
			cout << "Hangi Kova: ";
			cin >> kova1;
			cout << endl;
			cout << "Hangi Kova ile: ";
			cin >> kova2;

			a->kovalaridegis(kova1, kova2);

			a->kovalaribas();

			break;
		case 4:

			int top1,top2;
			cout << "Değiştirmek istediğiniz top numaralarını yazınız" << endl;
			cout << "Hangi Top: ";
			cin >> top1;
			cout << endl;
			cout << "Hangi Top ile: ";
			cin >> top2;

			a->toplaridegis(top1,top2);

			a->kovalaribas();

			break;
		case 5:

			a->kovalariterstenyerlestir();

			a->kovalaribas();

			break;
		case 6:

			a->toplariterstenyerlestir();

			a->kovalaribas();

			break;
		case 7:

			system("pause");
			break;

		default:
			system("cls");
			cout << "Menü sayılarını kullanınız..!" << endl;
			continue;
		}
	} while (secenek != 7);
}