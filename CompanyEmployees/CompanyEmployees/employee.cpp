#include "employee.h"

employee::employee(string n, int idd, double s)
{
	name = n;
	empID = idd;
	salary = s;

}

void employee::print()
{
	cout << "the employee name is\t" << name << "\n";
	cout << "the employee ID is\t" << empID << "\n";
	cout << "the employee net salary is\t" << salary << "\n";

}
