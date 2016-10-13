#pragma once
#include "File.h"
#include <iostream>
using namespace std;
class Image : public File
{
public:
	Image(const string& name) :File(name) {}
	virtual void View()
	{
		cout << "Image file, ";
		File::View();
	}
};
