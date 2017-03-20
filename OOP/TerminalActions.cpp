#include "stdafx.h"
#include "monsters.h"

using namespace std::this_thread;
using namespace std::chrono;

void cleanTerminal()
{
	cout << "\nTerminal will be cleared in 5 seconds";
	sleep_for(seconds(5));
	system("cls");
}

int creationDecide()
{
	fflush(stdin);
	cout << "Do you want to:\n" << "1. Create monster (1/Y/y)\n2. Create one random monster(2/R/r)\n3. Create player (3/P/p)\n4. Create multiple random monsters (4/M/m)\n5. Exit (enter)\n\n";
	return getchar();
}