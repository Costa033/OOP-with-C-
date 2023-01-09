#pragma once
#include <iostream>
using namespace std;
#include <string>


class employee
{
private:
	string name;
	int empID;
	double salary;

public:

	employee(string n, int idd, double s);

	virtual double getTotalSalary() = 0;

	virtual void print();

	friend class salesman;
	friend class engineer;
};

