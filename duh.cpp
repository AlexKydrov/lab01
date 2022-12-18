#include "duh.h"

duh::duh()
{
	cout << "add duh"<< endl << endl;
	try
	{
		setType(3);
		cout << "name";
		cin.ignore(256, '\n');
		getline(cin, name);

		cout << "producer ";
		getline(cin, producer);

		cout << "cost ";
		cin >> this->cost;
		if (this->cost < 0)
		{
			throw (string)"cost error";
		}
		
		cout << "FIO";
		cin.ignore(256, '\n');
		getline(cin, FIO);

		cout << "amount ";
		cin >> this->amount;
		if (this->amount < 0)
		{
			throw (string)"amount error";
		}
		cout << "description ";
		cin.ignore(256, '\n');
		getline(cin, description);

		setError(false);
	}
	catch (string err)
	{
		cout << "ERROR: " + err << endl;
		setError(true);
	}
}

duh::duh(ifstream& fin)
{
	setType(3);
	fin.ignore(256, '\n');
	getline(fin, name);
	getline(fin, producer);
	fin >> this->cost;
	fin.ignore(256, '\n');
	getline(fin, FIO);
	fin >> this->amount;
	fin.ignore(256, '\n');
	getline(fin, description);
}















duh::~duh()
{
	cout << "descructor duh" << endl;
}

void duh::edit()
{
	try
	{
		int index;
		int iTmp;
		string sTmp;
		cout << "What you want to edit" << endl
			<< "[1] name" << endl
			<< "[2] producer" << endl
			<< "[3] cost" << endl
			<< "[4] FIO" << endl
			<< "[5] amount" << endl
			<< "[6] description" << endl;
			
		cin >> index;
		if (index < 1 || index > 6)
		{
			throw (string)"Error";
		}
		cout << "old ";
		switch (index)
		{
		case 1:
			cout << name << endl;
			cout << "New ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
				throw (string)"Error";
			name = sTmp;
			break;
		case 2:
			cout << producer << endl;
			cout << "New ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
				throw (string)"Error";
			producer = sTmp;
			break;
		case 3:
			cout << cost << endl;
			cout << "New ";
			cin >> iTmp;
			if (iTmp < 0)
			{
				throw (string)"Error";
			}
			cost = iTmp;
			break;
		case 4:
			cout << FIO << endl;
			cout << "New ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
				throw (string)"Error";
			FIO = sTmp;
			break;
		case 5:
			cout << amount << endl;
			cout << "New ";
			cin >> iTmp;
			if (iTmp < 0)
			{
				throw (string)"Error";
			}
			amount = iTmp;
			break;
		case 6:
			cout << description << endl;
			cout << "New ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			if (sTmp == "")
				throw (string)"Error";
			description = sTmp;
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

void duh::save(ofstream& fout)
{
	fout << getType() << endl
		<< this->name << endl
		<< this->producer << endl
		<< this->cost << endl
		<< this->FIO << endl
		<< this->amount << endl
		<< this->description << endl;
}

void duh::print(ostream& out)
{
	out << "duh:" << endl
		<< "Name " << this->name << endl
		<< "producer: " << this->producer << endl
		<< "cost " << this->cost << endl
		<< "FIO " << this->FIO << endl
		<< "amount : " << this->amount << endl
		<< "description : " << this->description << endl;
}
