#pragma once
#include <string>
using namespace std;
class EncryptText
{
public:
	EncryptText() = default;
	EncryptText(const string& str):m_text(str) {}

	virtual void Encrypt() = 0;

	string GetText() const { return m_text; }
	void SetText(const string& str) { m_text = str; }
private:
	string m_text;
};