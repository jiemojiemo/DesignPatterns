#pragma once

#include "FileReader.h"
#include "FileWrite.h"
#include "Encryptor.h"

class EncrytModule
{
public:
	string Readfile(const string& filename)
	{
		m_fileText = m_fileReader.ReadFile(filename);
		return m_fileText;
	}

	void WriteFile(const string& filename)
	{
		m_fileWriter.WriteFile(filename,m_fileText);
	}

	void Encrypt(const string& text)
	{
		m_encryptor.Encrypt(m_fileText);
	}


private:
	FileReader m_fileReader;
	FileWriter m_fileWriter;
	Encryptor m_encryptor;
	string m_fileText;
};