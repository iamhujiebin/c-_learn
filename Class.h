#pragma once
#include <string>
using namespace std;

class Company {
public:
	Company();
	Company(int members);
	Company(string name, int members);
	string name;
	int members;
	string address;
	string getAddress();
	void setAddress(string addr);
	double getIncome();
	void setIncome(double income);
	friend void printCompanyName(Company c);
	static int getTotalCompany();
protected:
	static int totalCompany;
	double income;
};

class Mohang :public Company {
public:
	Mohang(string name, int members);
	Mohang(int members);
	~Mohang();
	void setMembers(int members);
	double getSalary();
	string getName();
};

