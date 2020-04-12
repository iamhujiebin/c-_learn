#include <iostream>

using namespace std;

int main();

void func(void);
static int global = 10;//全局变量
int exte = 1000101010;
extern void printExtern(void);
extern int findMax(int, int = 199);

int main()
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
	printExtern();
	thread_local string tl = "thread local variable";
	cout << "thread_local变量仅可在它在其上创建的线程上访问,变量在创建线程时创建，并在销毁线程时销毁" << tl << endl;
	while (global > 0)
	{
		global--;
		func();
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
	cout << "findMax:" << findMax(135) << endl;
	auto aFunc = [](int x, int y)-> int { return x + y; };
	cout << "lambda:匿名函数" << aFunc(32, 11) << endl;
}

void func(void)
{
	static int i = 5;
	i++;
	cout << "i:" << i << endl;
	cout << "global:" << global << endl;
}
