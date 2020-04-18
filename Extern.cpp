#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <string>
extern int exte;
static int global = 10;//ȫ�ֱ���

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
	cout << "c++���м��ı�����ԣ�������΢ֱ�ӵزٿؼ����Ӳ��������Ĵ������������Կ���" << endl;
	auto f = 3.14;
	auto s("hello");
	auto z = new auto(9);
	cout << f << s << z << "auto �ؼ����൱��var" << endl;
	register int reg;
	reg = 100;
	cout << reg << "�洢�ڼĴ����У����û���ڴ�λ�õģ�������RAM�����ڴ�ռ䣬�ѣ�" << endl;
	cout << "static �ؼ��־����Ϊȫ�ֱ����������ͺ� " << endl;
	thread_local string tl = "thread local variable";
	cout << "thread_local�����������������ϴ������߳��Ϸ���,�����ڴ����߳�ʱ���������������߳�ʱ����" << tl << endl;
	while (global > 0)
	{
		global--;
	}
	do {
		cout << "do while ����һ��do " << endl;
	} while (global > 0);
	char grade = 'D';
	switch (grade)
	{
	case 'D':
		cout << "�ܲ�" << endl;
		break;
	case 'A':
		cout << "��good" << endl;
	default:
		break;
	}

	auto aFunc = [](int x, int y)-> int { return x + y; };
	cout << "lambda:��������" << aFunc(32, 11) << endl;

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
	cout << i << "����:" << b;
}

void output()
{
	cout << "��׼�����" << endl;
	cerr << "��׼������,û�л���Ĵ�����" << endl;
	clog << "��׼������,�л���Ĵ�����" << endl;
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
		cout << "�����" << j << endl;
	}
}

