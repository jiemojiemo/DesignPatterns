#pragma once
#include <string>
#include <iostream>
#include <memory>
using namespace std;
class File
{
public:
	File(const string& name) :m_filename(name) {}
	virtual void View() = 0
	{
		cout << "file name is " << m_filename << endl;
	}

	virtual void Add(shared_ptr<File>& file){}

	virtual void Remove(shared_ptr<File>& file){}

	virtual shared_ptr<File> GetFile(int index) { return nullptr; }
protected:
	string m_filename;
};