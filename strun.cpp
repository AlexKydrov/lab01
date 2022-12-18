#include "strun.h"

strun::strun()
{
	cout << "Add strun" << endl << endl;
	try
	{
		setType(2);
		cout << "Name ";
		cin.ignore(256, '\n');
		getline(cin, name);

		cout << "FIO";

		getline(cin, FIO);

		cout << "Producer";

		getline(cin, producer);

		cout << "Cost";
		cin >> this->cost;
		if (this->cost < 0)
		{
			throw (string)"Cost error";
		}
		cout << "amount";
		cin >> this->amount;
		if (this->amount < 0)
		{
			throw (string)"amount error";
		}
		cout << "description";
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

strun::strun(ifstream& fin)
{
	setType(2);
	fin.ignore(256, '\n');
	getline(fin, name);

	getline(fin, FIO);

	getline(fin, producer);
	fin >> this->cost >> this->amount;
	fin.ignore(256, '\n');
	getline(fin, description);

}

strun::~strun()
{
	cout << "desrtuctor strun" << endl;
	system("pause");
}

void strun::edit()
{
	try
	{
		int index;
		int iTmp;
		string sTmp;
		cout << "What you want to edit" << endl
			<< "[1] Name" << endl
			<< "[2] FIO" << endl
			<< "[3] Producer" << endl
			<< "[4] Cost" << endl
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
			name = sTmp;
			break;
		case 2:
			cout << FIO << endl;
			cout << "name";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
			name = sTmp;
			break;
		case 3:
			cout << producer << endl;
			cout << "New ";
			cin.ignore(256, '\n');
			getline(cin, sTmp);

			producer = sTmp;
			break;
		case 4:
			cout << cost << endl;
			cout << "new ";
			cin >> iTmp;
			if (iTmp < 0)
			{
				throw (string)"Error cost";
			}
			cost = iTmp;
			break;
		case 5:
			cout << amount << endl;
			cout << "New ";
			cin >> iTmp;
			if (iTmp < 0)
			{
				throw (string)"Error amount";
			}
			amount = iTmp;
			break;
		case 6:
			cout << description << endl;
			cout << "description";
			cin.ignore(256, '\n');
			getline(cin, sTmp);
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

void strun::save(ofstream& fout)
{
	fout << getType() << endl
		<< this->name << endl
		<< this->FIO << endl
		<< this->producer << endl
		<< this->cost << endl
		<< this->amount << endl
		<< this->description << endl;
}

void strun::print(ostream& out)
{
	out << "strun:" << endl
		<< "Name " << this->name << endl
		<< "FIO: " << this->FIO << endl
		<< "producer " << this->producer << endl
		<< "cost : " << this->cost << endl
		<< "amount : " << this->amount << endl
		<< "description : " << this->description << endl;
}
