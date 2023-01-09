#pragma once
#include "employee.h"
class salesman : public employee
{
private:

	float grossSales;
	float commitionRate;

public:

	salesman(string n, int idd, double s, float gss, float crr) : employee(n, idd, s)
	{
		grossSales = gss;
		commitionRate = crr;
	}

	void setGrossSales(float gs);
	void setCommitionRate(float cr);

	//PURE VIRTUAL AND OVERRIDING

	double getTotalSalary();
	void print();
};

