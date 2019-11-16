#include "Cell.h"

Cell::Cell():
	isExist(false)
	,mName("")
{
	
}

void Cell::Set(string name)
{
	mName = name;
	isExist = true;
}

void Cell::Clear()
{
	mName = "";
	isExist = false;
}

bool Cell::GetExist()
{
	return isExist;
}

string Cell::GetName()
{
	return mName;
}