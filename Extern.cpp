#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <string>
extern int exte;
static int global = 10;//全局变量

using namespace std;

void printExtern(void);

int findMax(int, int);

void temp();

void cstring();
void nstring();
void charPtr();
void ref();
void output();
void tryThrowCatch(int a, int b);

void printExtern(void)
{
	std::cout << "exte:" << exte << std::endl;
}

int findMax(int a, int b = 99)
{
	return a > b ? a : b;
}

void temp()
{
	cout << "c++是中级的编程语言，可以稍微直接地操控计算机硬件，例如寄存器，声卡，显卡等" << endl;
	auto f = 3.14;
	auto s("hello");
	auto z = new auto(9);
	cout << f << s << z << "auto 关键词相当于var" << endl;
	register int reg;
	reg = 100;
	cout << reg << "存储在寄存器中，因此没有内存位置的，区别于RAM（有内存空间，堆）" << endl;
	cout << "static 关键字就理解为全局变量的声明就好 " << endl;
	thread_local string tl = "thread local variable";
	cout << "thread_local变量仅可在它在其上创建的线程上访问,变量在创建线程时创建，并在销毁线程时销毁" << tl << endl;
	while (global > 0)
	{
		global--;
	}
	do {
		cout << "do while 多做一次do " << endl;
	} while (global > 0);
	char grade = 'D';
	switch (grade)
	{
	case 'D':
		cout << "很差" << endl;
		break;
	case 'A':
		cout << "很good" << endl;
	default:
		break;
	}

	auto aFunc = [](int x, int y)-> int { return x + y; };
	cout << "lambda:匿名函数" << aFunc(32, 11) << endl;

}

void cstring()
{
	char str[] = "hello";
	char str2[] = "world";
	cout << str << str2 << endl;
}

void nstring()
{
	string s = "hello";
	string s2 = "world";
	cout << s + s2 << endl;
	auto se = s + s2;
	cout << se.size() << endl;
}

void charPtr()
{
	const char* strs[3] = {
		"jiebin",
		"zehong",
		"mengyin"
	};
	for (int i = 0; i < 3; i++)
	{
		cout << strs[i] << endl;
	}
}

void ref()
{
	int i = 100;
	int& b = i;
	cout << i << "引用:" << b;
}

void output()
{
	cout << "标准输出流" << endl;
	cerr << "标准错误流,没有缓冲的错误流" << endl;
	clog << "标准错误流,有缓冲的错误流" << endl;
}

void tryThrowCatch(int a, int b)
{
	if (b == 0) {
		throw "b is 0";
	}
	printf("a/b=%f", double(a) / double(b));
}

void printRand()
{
	int i, j;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		j = rand();
		cout << "随机数" << j << endl;
	}
}

