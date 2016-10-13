#pragma once
#include "File.h"
class Text : public File
{
public:
	Text(const string& name) :File(name) {}

	virtual void View()
	{
		cout << "Text file, ";
		File::View();
	}
};