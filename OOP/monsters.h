#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <cstdio>
#include <chrono>
#include <thread>

using namespace std;

string getTypeName(const enum MonsterType& type);
void printMonsterData(const struct Monster& monster);
void printMonsterDataWsk(const struct Monster *monster);
void printPlayerData(const struct Player& player);
void printPlayerDataWsk(const struct Player *player);
Monster *createMonster(string name, unsigned short int type, int attack, int health);
Player *createPlayer(string name, int mana, int attack, int health);
void createRandomMonster(short int print);
void cleanTerminal();
int creationDecide();

enum MonsterType //Monster types
{
	GHOST,
	DRAGON,
	SLIME,
	SKELETON,
	CIVILIAN,
	MIMIC,
	WOLF,
	SCAVANGER,
	TROLL,
	_numofm
};

struct Monster //Monster traits
{
	string name;
	string type;
	int attack;
	double health;
};

struct Player //Player traits
{
	string name;
	int attack;
	int mana;
	double health;
};