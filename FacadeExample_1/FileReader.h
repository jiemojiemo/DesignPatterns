#pragma once

#include <string>
#include <iostream>
using namespace std;

class FileReader
{
public:
	string ReadFile(const string& filename)
	{
		cout << "Open " << filename << "\n";
		return "123";
	}
};