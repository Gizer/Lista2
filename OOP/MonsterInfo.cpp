#include "stdafx.h"
#include "monsters.h"

string getTypeName(const enum MonsterType& type) //Selecting monster type
{
	switch (type)
	{
	case GHOST:
		return "GHOST";
	case DRAGON:
		return "DRAGON";
	case SLIME:
		return "SLIME";
	case SKELETON:
		return "SKELETON";
	case CIVILIAN:
		return "CIVILIAN";
	case MIMIC:
		return "MIMIC";
	case WOLF:
		return "WOLF";
	case SCAVANGER:
		return "SCAVANGER";
	case TROLL:
		return "TROLL";
	case _numofm:
		return "DON'T MESS WITH MY CODE";

	}
}

//Printing monster info
void printMonsterData(const struct Monster& monster)
{
	cout << monster.name << endl << monster.type << endl << monster.attack << endl << monster.health << endl << endl;
}

void printMonsterDataWsk(const struct Monster *monster)
{
	cout << (*monster).name << endl << (*monster).type << endl << (*monster).attack << endl << (*monster).health << "\nWSK" << endl << endl;
}