#pragma once
#include "ork.h"

class strun : public ork
{
	string name;
	string FIO;
	string producer;
	int cost;
	int amount;
	string description;
public:
	strun();
	strun(ifstream& fin);
	~strun();
	void edit();
	void save(ofstream& fout);
	void print(ostream& out);
};