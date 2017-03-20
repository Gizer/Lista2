// OOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "monsters.h"

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	//Randomising 1-st monster
	MonsterType type = static_cast<MonsterType>(rand() % _numofm);
	Monster m0;
	m0.name = "YANOOSH";
	m0.type = getTypeName(type);
	m0.attack = rand() % 100;
	m0.health = rand() % 100 * 1.0;

	printMonsterData(m0);
	printMonsterDataWsk(&m0);

	//Randomising 2-nd monster
	type = static_cast<MonsterType>(rand() % _numofm);
	Monster m1;
	m1.name = "YANOOSH2";
	m1.type = getTypeName(type);
	m1.attack = rand() % 101;
	m1.health = rand() % 101 * 1.0;

	printMonsterData(m1);
	printMonsterDataWsk(&m1);

	//Generating player
	Player player;
	player.name = "DESTROYER OF YANOOSH";
	player.attack = rand() % 101;
	player.mana = rand() % 26;
	player.health = rand() % 101 * 1.0;

	printPlayerData(player);
	printPlayerDataWsk(&player);

	//Creation variables
	string monsterName;
	unsigned short int monsterType=0;
	int monsterAttack;
	int monsterHealth;
	int mana;
	short int print=0;

	//Decide action
	char createConfirmation = creationDecide();

	//Clearing terminal
	cleanTerminal();

	//Creating monster
	if (createConfirmation == '1' || createConfirmation == 'y' || createConfirmation == 'Y')
		{
			cout << "\nName: ";
			cin >> monsterName;
			do
			{
				cout << "\nType (id from 0 to " << _numofm - 1 << ", default GHOST[0]): ";
				cin >> monsterType;
			} while (monsterType < 0 || monsterType>_numofm);
			cout << "\nAttack: ";
			cin >> monsterAttack;
			cout << "\nHealth: ";
			cin >> monsterHealth;
			printMonsterDataWsk(createMonster(monsterName, monsterType, monsterAttack, monsterHealth));
			delete createMonster("0", 0, 0, 0);
		}

		//Generating monster
		else if(createConfirmation == '2' || createConfirmation == 'r' || createConfirmation == 'R')
		{
			cout << "\nDo you want to print random monster? 1. Yes (press 1)		2. No (press 0)\n";
			cin >> print;
			createRandomMonster(print);
		}

		//Creating player
		else if (createConfirmation == '3' || createConfirmation == 'P' || createConfirmation == 'p')
		{
			cout << "\nName: ";
			cin >> monsterName;
			cout << "\nMana";
			cin >> mana;
			cout << "\nAttack: ";
			cin >> monsterAttack;
			cout << "\nHealth: ";
			cin >> monsterHealth;
			printPlayerDataWsk(createPlayer(monsterName, mana, monsterAttack, monsterHealth));
		}

		//Creating array of random monsters
		else if (createConfirmation == '4' || createConfirmation == 'M' || createConfirmation == 'm')
		{
			short unsigned int  numOfMon;
			cout << "How many monsters would you like to generate?\n";
			cin >> numOfMon;
			Monster *arrayOfMonsters = new Monster[numOfMon];
			for (numOfMon; numOfMon > 0; numOfMon--)
			{
				createRandomMonster(1);
			}
			delete[]arrayOfMonsters;
		}

	
	system("PAUSE");
    return 0;
}

