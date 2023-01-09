#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "employee.h"

class engineer : public employee
{

private:

	string specialty;
	int experiance;
	int overtimeHours;
	float overtime_HourRate;
	
public:

	engineer(string n, int idd, double s, string sp, int ex, int ovth, float ovthr) : employee(n, idd, s)
	{
		specialty = sp;
		experiance = ex;
		overtimeHours = ovth;
		overtime_HourRate = ovthr;
	}

	void setOvertimeHours(int oth);
	void setOvertimeHoursRate(float othr);

	//PURE VIRTUAL AND OVERRIDING

	double getTotalSalary();

	void print();

};

