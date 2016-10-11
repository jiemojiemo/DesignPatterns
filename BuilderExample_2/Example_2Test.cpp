#include "Director.h"
#include "MapBuilder.h"
#include "CharactorBuilder.h"

#include <iostream>
using namespace std;

void ShowMap(const Map& map)
{
	cout << map.Sky() << endl;
	cout << map.Ground() << endl;
	cout << map.Background() << endl;
}

void ShowCharactor(const Character& cha)
{
	cout << cha.Body() << endl;
	cout << cha.Costume() << endl;
	cout << cha.Equipment() << endl;
}

int main()
{
	MapBuilder* mapBuilder1 = new AMapBuilder();
	CharacterBuilder* charaBuilder1 = new WizardBuilder();
	
	MapDirector mapDir(mapBuilder1);
	auto mp1 = mapDir.Construct();
	ShowMap(mp1);

	CharacterDirector chaDir(charaBuilder1);
	auto cha1 = chaDir.Construct();
	ShowCharactor(cha1);
	return 0;
}