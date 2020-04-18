#include <iostream>
#include "Class.h"
#include "Vitual.h"
#include "Stack.h"
#include <csignal>
#include <Windows.h>
#define PI 3.14
#define MKSTR( x ) #x
#define CONCAT(x,y) x ## y//## 运算符用于连接两个令牌

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

void signalHandler(int signum) {
	cout << "signal is good play:" << signum << endl;
	exit(signum);
}


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
	//try {
	//	Stack<int>         intStack;  // int 类型的栈 
	//	Stack<string> stringStack;    // string 类型的栈 

	//	// 操作 int 类型的栈 
	//	intStack.push(7);
	//	cout << intStack.top() << endl;

	//	// 操作 string 类型的栈 
	//	stringStack.push("hello");
	//	cout << stringStack.top() << std::endl;
	//	stringStack.pop();
	//	stringStack.pop();
	//}
	//catch (exception const& ex) {
	//	cerr << "Exception: " << ex.what() << endl;
	//	return -1;
	//}

	cout << "Value of PI :" << PI << endl;
	cout << MKSTR(love) << endl;
	string jiebinmengyin = "llalal";
	cout << CONCAT(jiebin, mengyin) << endl;
	int xy = 100;
	cout << CONCAT(x, y) << endl;

	cout << "Value of __LINE__ : " << __LINE__ << endl;
	cout << "Value of __FILE__ : " << __FILE__ << endl;
	cout << "Value of __DATE__ : " << __DATE__ << endl;
	cout << "Value of __TIME__ : " << __TIME__ << endl;

	int i = 0;
	while (true)
	{
		i++;
		cout << "等待你CTRL+C 噢亲" << endl;
		Sleep(1000);
		if (i == 1) {
			raise(SIGINT);
		}
	}
	signal(SIGINT, signalHandler);

}

