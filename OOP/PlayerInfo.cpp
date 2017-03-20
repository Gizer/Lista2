#include "stdafx.h"
#include "monsters.h"

//Printing player info
void printPlayerData(const struct Player& player)
{
	cout << player.name << endl << player.attack << endl << player.mana << endl << player.health << endl << endl;
}

void printPlayerDataWsk(const struct Player *player)
{
	cout << (*player).name << endl << (*player).attack << endl << (*player).mana << endl << (*player).health << "\nWSK" << endl << endl;
}