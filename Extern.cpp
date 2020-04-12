#include <iostream>
extern int exte;

void printExtern(void);

int findMax(int, int);

void printExtern(void)
{
	std::cout << "exte:" << exte << std::endl;
}

int findMax(int a, int b = 99)
{
	return a > b ? a : b;
}

