#pragma once
#include "CharactorBuilder.h"
#include "MapBuilder.h"

class CharacterDirector
{
public:
	CharacterDirector(CharacterBuilder* builder) :m_builder(builder) {}
	Character Construct()
	{
		m_builder->BuildBody();
		m_builder->BuildCostume();
		m_builder->BuildEquipment();
		return m_builder->GetCharacter();
	}
private:
	CharacterBuilder* m_builder;
};

class MapDirector
{
public:
	MapDirector(MapBuilder* builder) :m_builder(builder) {}
	Map Construct()
	{
		m_builder->BuildSky();
		m_builder->BuildGround();
		m_builder->BuildGround();
		return m_builder->GetMap();
	}
private:
	MapBuilder* m_builder;
};
