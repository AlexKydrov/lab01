#pragma once
#include "udar.h"
#include "strun.h"
#include "duh.h"
#include <fstream>

class Keeper
{
	ork** data;
	int size;
public:
	Keeper();
	~Keeper();
	int getSize();
	void add();
	void add(int _type, ifstream& fin);
	void edit();
	void del();
	void save();
	void load();
	friend ostream& operator<<(ostream& out, Keeper& obj);
};