#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Cell
{
public:
	Cell();

	void Set(string name);
	void Clear();

	bool GetExist();
	string GetName();

private:
	bool isExist;
	string mName;
};

