#pragma once
#include <string>
using namespace std;
class Character
{
public:

	std::string Body() const { return m_body; }
	void Body(const std::string& val) { m_body = val; }
	std::string Costume() const { return m_costume; }
	void Costume(const std::string& val) { m_costume = val; }
	std::string Equipment() const { return m_equipment; }
	void Equipment(const std::string& val) { m_equipment = val; }
private:
	string m_body;
	string m_costume;
	string m_equipment;
};
