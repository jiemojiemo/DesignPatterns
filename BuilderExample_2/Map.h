#pragma once
#include <string>
using namespace std;
class Map
{
private:
	string m_sky;
	string m_ground;
	string m_background;
public:
	std::string Sky() const { return m_sky; }
	void Sky(const std::string& val) { m_sky = val; }
	std::string Ground() const { return m_ground; }
	void Ground(const std::string& val) { m_ground = val; }
	std::string Background() const { return m_background; }
	void Background(const std::string& val) { m_background = val; }
};