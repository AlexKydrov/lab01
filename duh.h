#pragma once
#include "ork.h"

class duh : public ork
{
	int cost;
	string name;
	int amount;
	string description;
	string producer;
		string FIO;
public:
	duh();
	duh(ifstream &fin);
	~duh();
	void edit();
	void save(ofstream& fout);
	void print(ostream& out);
};
