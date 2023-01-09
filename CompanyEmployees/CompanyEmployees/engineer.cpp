#include "engineer.h"
#include <iostream>
using namespace std;
#include <string>

void engineer::setOvertimeHours(int oth)
{
	overtimeHours = oth;
}

void engineer::setOvertimeHoursRate(float othr)
{
	overtime_HourRate = othr;
}

double engineer::getTotalSalary()
{
	double y;
	y = (overtimeHours * overtime_HourRate) + salary;

	return y;
}

void engineer::print()
{
	
	cout << "the employee job is a ENGINEER \n";
	employee::print() ;
	
	cout << "the employee specialty is\t" << specialty << "\n";
	cout << "the employee experiance is\t" << experiance << "years"<<  "\n";
	cout << "the employee total salary is\t" << getTotalSalary()  << "\n";
}
