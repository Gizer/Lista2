#include "stdafx.h"
#include "monsters.h"
#include <algorithm>

Monster *createMonster(string name, unsigned short int type, int attack, int health)
{
	Monster *m = new Monster();
	(*m).name = name;
	(*m).type = getTypeName(static_cast<MonsterType>(rand() % _numofm));
	(*m).attack = attack;
	(*m).health = health;
	return m;
}

Player *createPlayer(string name, int mana, int attack, int health)
{
	Player *p = new Player();
	(*p).name = name;
	(*p).mana = mana;
	(*p).attack = attack;
	(*p).health = health;
	return p;
}

string random_string(size_t length)
{
	auto randchar = []() -> char
	{
		const char charset[] =
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";
		const size_t max_index = (sizeof(charset) - 1);
		return charset[rand() % max_index];
	};
	string str(length, 0);
	generate_n(str.begin(), length, randchar);
	return str;
}

void createRandomMonster(short int print)
{
	Monster randomMonster;
	randomMonster.name = random_string(8);
	MonsterType type = static_cast<MonsterType>(rand() % _numofm);
	randomMonster.type = getTypeName(type);
	randomMonster.attack = (rand() % 16) + 5;
	randomMonster.health = (rand() % 21) + 10;
	if (print)
		printMonsterData(randomMonster);
}