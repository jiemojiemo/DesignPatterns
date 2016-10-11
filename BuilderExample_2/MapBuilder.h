#pragma once
#include "Map.h"

class MapBuilder
{
	friend class MapDirector;
public:
	virtual void BuildSky() = 0;
	virtual void BuildGround() = 0;
	virtual void BuildBackGround() = 0;
private:
	Map GetMap()const { return m_map; }
protected:
	Map m_map;
};

class AMapBuilder : public MapBuilder
{
public:
	virtual void BuildSky()
	{
		this->m_map.Sky("Blue");
	}
	virtual void BuildGround()
	{
		this->m_map.Ground("Forest");
	}
	virtual void BuildBackGround()
	{
		this->m_map.Background("Green");
	}
};

class BMapBuilder : public MapBuilder
{
public:
	virtual void BuildSky()
	{
		this->m_map.Sky("Dull");
	}
	virtual void BuildGround()
	{
		this->m_map.Ground("Desert");
	}
	virtual void BuildBackGround()
	{
		this->m_map.Background("Yellow");
	}
};
