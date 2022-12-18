#include "udar.h"

udar::udar()
{
	cout << "Add udar" << endl << endl;
	try
	{
		setType(1);
		cout << "type";
		cin.ignore(256, '\n');
		getline(cin, type);


		cout << "name";
		getline(cin, name);
		

		cout << "cena";
		cin >> this->cena;
		if (!this->cena || this->cena < 0)
		{
			throw (string)"Error";
		}
		

		cout << "count";
		cin >> this->count;
		if (this->count < 0)
		{
			throw (string)"Error";
		}
		cout << "FIO";
		cin.ignore(256, '\n');
		getline(cin, FIO);
	
		
		setError(false);
	}
	catch (string err)
	{
		cout << "ERROR: " + err << endl;
		setError(true);
	}
}

udar::udar(ifstream& fin)
{
	setType(1);
	fin.ignore(256, '\n');
	getline(fin, type);
	getline(fin, name);
	fin >> this->cena >> this->count;
	fin.ignore(256, '\n');
	getline(fin, FIO);
	
}

udar::~udar()
{
	cout << "desctructor udar" << endl;
	system("pause");
}

void udar::edit()
{
	try
	{
		int index;
		int iTmp;
		string sTmp;
		cout << "What you want to edit" << endl
			<< "[1] Type" << endl
			<< "[2] Name" << endl
			<< "[3] Cena" << endl
			<< "[4] Amount" << endl
			<< "[5] FIO" << endl;
		cin >> index;
		if (index < 1 || index > 5)
		{
			throw (string)"Error";
		}
		cout << "old ";
		switch (index)
		{
		case 1:
			cout << type << endl;
			cout << "new";
			cin.ignore(256, '\n');
			getline(cin, sTmp);

			type = sTmp;
			break;


		case 2:
			cout << name << endl;
			cout << "old";
			cin.ignore(256, '\n');
			getline(cin, sTmp);


			name = sTmp;
			break;
		case 3:
			cout << cena << endl;
			cout << "new";
			cin >> iTmp;
			if (!iTmp || iTmp < 0)
			{
				throw (string)"Error";
			}
			cena = iTmp;
			break;
		case 4:
			cout << count << endl;
			cout << "New ";
			cin >> iTmp;
			if (iTmp < 0)
			{
				throw (string)"amount";
			}
			count = iTmp;
			break;
		
		case 5:
			cout << FIO << endl;
			cout << "new";
			cin.ignore(256, '\n');
			getline(cin, sTmp);

			FIO = sTmp;
			break;

		} 
		setError(false);
	}
	catch (string err)
	{
		cout << "ERROR: " + err << endl;
		setError(true);
	}
}

void udar::save(ofstream& fout)
{
	fout << getType() << endl
		<< this->type << endl
		<< this->name << endl
		<< this->cena << endl
		<< this->count << endl
		<< this->FIO << endl
;
}

void udar::print(ostream& out)
{
	out << "udar" << endl
		<< "type " << type << endl
		<< "name " << name << endl
		<< "cena" << cena << endl
		<< "amount" << count << endl
		<< "FIO " << FIO << endl
		;
}
