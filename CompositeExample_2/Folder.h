#pragma once
#include "File.h"
#include <list>
#include <memory>
#include <cassert>
using std::unique_ptr;
using std::move;
using std::list;
class Folder : public File
{
public:
	Folder(const string& name) :File(name) {}

	virtual void View()
	{
		for (auto& iter : m_fileList)
		{
			iter->View();
		}
	}

	void Add(shared_ptr<File>& file)
	{
		m_fileList.push_back(file);
		//m_fileList.push_back(make_unique<Image>("ttttt"));
	}

	void Remove(shared_ptr<File>& file)
	{
		m_fileList.remove(file);
	}

	shared_ptr<File> GetFile(int index)
	{
		assert(index < m_fileList.size());

		auto iter = m_fileList.begin();
		std::advance(iter, index);

		return move(*iter);
	}

public:
	list<shared_ptr<File>> m_fileList;
};