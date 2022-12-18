#include <iostream>
#include "Keeper.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Keeper Konten;
	int menu;
	do
	{
		system("cls");
		cout 
			<< "Numbers of element[" << Konten.getSize() << "]" << endl
			<< "[1] Add new" << endl
			<< "[2] Delete" << endl
			<< "[3] Save" << endl
			<< "[4] Load" << endl
			<< "[5] Edit" << endl
			<< "[6] Show" << endl
			<< "[0] Exit" << endl;
		cin >> menu;
		system("cls");
		switch (menu)
		{
		case 1:
			Konten.add();
			break;
		case 2:
			Konten.del();
			break;
		case 3:
			Konten.save();
			break;
		case 4:
			Konten.load();
			break;
		case 5:
			Konten.edit();
			break;
		case 6:
			cout << Konten;
			break;
		case 0:
			return 0;
		default:
			break;
		}
	
	} while (true);
}