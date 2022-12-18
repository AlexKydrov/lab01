#pragma once
#include "ork.h"

class udar : public ork
{
	string type;
	string name;
	int cena;
	int count;
	string FIO;

public:
	udar();
	udar(ifstream &fin);
	~udar();
	void edit();
	void save(ofstream& fout);
	void print(ostream& out);
};