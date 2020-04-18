#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
#include <typeinfo>

using namespace std;

void testTime();

void testTime()
{
	cout << "time beging" << endl;
	int64_t i64 = 100;
	time_t now = time(0);
	cout << typeid(now).name() << endl;
	cout << typeid(i64).name() << endl;
	cout << now + 100 << endl;
	printf("time:%s", ctime(&now));
	tm* gmtm = gmtime(&now);
	char* dt = asctime(gmtm);
	printf("%s\n", dt);
	tm* ltm = localtime(&now);
	printf("localtime:\n year:%d,month:%d,day:%d,hour:%d,str:%s\n", 1900 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday, ltm->tm_hour, asctime(ltm));
}
