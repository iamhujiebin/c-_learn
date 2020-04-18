#include <iostream>
#include "Class.h"
#include "Vitual.h"
#include "Stack.h"

using namespace std;

int main();
int exte = 1000101010;
extern void printExtern(void);
extern int findMax(int, int = 199);
extern void printRand();
extern void temp();
extern void cstring();
extern void nstring();
extern void charPtr();
extern void ref();
extern void testTime();
extern void output();
extern void TestStruct();
extern void tryThrowCatch(int, int);

int main()
{
	//temp();
	//printExtern();
	//auto max = findMax(135);
	//cout << max << endl;
	/*printRand();
	cstring();
	nstring();
	charPtr();
	ref();*/
	//testTime();
	//output();
	//TestStruct();
	/*Mohang m("mohang", 10);
	m.setIncome(10000.12);
	m.setAddress("payu");
	cout << m.getSalary() << ":" << m.getIncome() << endl;
	printCompanyName(m);
	Mohang m2(10);
	cout << "totalCompany:" << Company::getTotalCompany() << endl;*/
	/*Shape* s;
	Rectangle r(1, 2);
	Triangle t(2, 3);
	s = &r;
	cout << s->area() << endl;
	s = &t;
	cout << s->area() << endl;
	try
	{
		tryThrowCatch(1,1);
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}*/
	try {
		Stack<int>         intStack;  // int 类型的栈 
		Stack<string> stringStack;    // string 类型的栈 

		// 操作 int 类型的栈 
		intStack.push(7);
		cout << intStack.top() << endl;

		// 操作 string 类型的栈 
		stringStack.push("hello");
		cout << stringStack.top() << std::endl;
		stringStack.pop();
		stringStack.pop();
	}
	catch (exception const& ex) {
		cerr << "Exception: " << ex.what() << endl;
		return -1;
	}
}
