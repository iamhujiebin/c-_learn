#include "Class.h"
#include <iostream>

Company::Company()
{
	this->income = 0;
	this->members = 0;
	this->address = "";
	Company::totalCompany++;
}

Company::Company(int members) {
	this->members = members;
	this->income = 0;
	this->address = "";
	Company::totalCompany++;
}

Company::Company(string name, int members)
{
	this->name = name;
	this->members = members;
	//this->income = 0;
	Company::totalCompany++;
}

string Company::getAddress()
{
	return this->address;
}

void Company::setAddress(string addr) {
	this->address = addr;
}

double Company::getIncome()
{
	return this->income;
}

void Company::setIncome(double income)
{
	this->income = income;
}

int Company::getTotalCompany()
{
	return Company::totalCompany;
}

Mohang::Mohang(string name, int members)
{
	this->name = name;
	this->members = members;
}

Mohang::Mohang(int members)
{
	this->members = members;
}

Mohang::~Mohang()
{
	this->income;
}

double Mohang::getSalary()
{
	if (this->members > 0) {
		return this->income / this->members;
	}
	return 0.0;
}

string Mohang::getName()
{
	return this->name;
}

void Mohang::setMembers(int members)
{
	this->members = members;
}

void printCompanyName(Company c)
{
	cout << "company name:" << c.name << endl;
}

int Company::totalCompany = 0;
