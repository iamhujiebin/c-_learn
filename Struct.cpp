#pragma warning(disable : 4996)
#include <iostream>
#include <string>

using namespace std;

struct Person
{
	int id;
	char name[20];
	char address[200];
}Persion;

typedef long int ll;

void TestStruct();
void PrintStruct(Person*);

void TestStruct()
{
	Person jiebin;
	strcpy(jiebin.name, "½á±ù");
	jiebin.id = 1;
	strcpy(jiebin.address, "panyu");
	Person* p = &jiebin;
	PrintStruct(p);
	ll x, y, z;
	x = 1;
	printf("xx:%d", x);
}

void PrintStruct(Person* p) {
	printf("%s,%s \n in wrirge  way\n", p->name, p->address);
}
