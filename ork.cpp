#include "ork.h"

void ork::setType(int _type)
{
	type = _type;
}

int ork::getType()
{
	return type;
}

bool ork::isError()
{
	return this->error;
}

void ork::setError(bool _error)
{
	this->error = _error;
}

ork::~ork()
{
}