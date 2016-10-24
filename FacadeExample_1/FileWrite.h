#pragma once

#include <string>
#include <iostream>
using namespace std;

class FileWriter
{
public:
	void WriteFile(const string& filename, const string& text)
	{
		cout << "Write " << text << " to " << filename << endl;
	}
};