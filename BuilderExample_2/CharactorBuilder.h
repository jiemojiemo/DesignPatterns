#pragma once
#include "Character.h"

class CharacterBuilder
{
	friend class CharacterDirector;
public:
	virtual void BuildBody() = 0;
	virtual void BuildCostume() = 0;
	virtual void BuildEquipment() = 0;
private:
	Character GetCharacter()const { return m_character; }
protected:
	Character m_character;
};


class WizardBuilder : public CharacterBuilder
{
public:
	virtual void BuildBody()
	{
		this->m_character.Body("Wizard");
	}
	virtual void BuildCostume()
	{
		this->m_character.Costume("Cloak");
	}
	virtual void BuildEquipment()
	{
		this->m_character.Equipment("Wand");
	}
};


class WarriorBuilder : public CharacterBuilder
{
public:
	virtual void BuildBody()
	{
		this->m_character.Body("Warrior");
	}
	virtual void BuildCostume()
	{
		this->m_character.Costume("Armor");
	}
	virtual void BuildEquipment()
	{
		this->m_character.Equipment("Sword");
	}
};