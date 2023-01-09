#include <iostream>
using namespace std;
#include <string>


#include "salesman.h"

//salesman::salesman(string n, int idd, double s, float gss, float crr)
//{
//	grossSales = gss;
//	commitionRate = crr;
//}

void salesman::setGrossSales(float gs)
{
	grossSales = gs;
}

void salesman::setCommitionRate(float cr)
{
	commitionRate = cr;
}

double salesman::getTotalSalary()
{
	double x;
	x = (grossSales * commitionRate) + salary;
	return x;
}

void salesman::print()
{
	cout << "the employee job is a SALESMAN \n";
	employee::print();
	cout << "the salesman total salary is \t" << getTotalSalary() << "\n";

}
