#include "student.h"

student::student(string n, string g, float a, int le, float gg, string depa) : person (n , g , a)
{
	level = le;
	GPA = gg;
	department = depa;
}

void student::sLevel(int l)
{
	level = l;
}

void student::sGPA(float G)
{
	GPA = G;
}

void student::sDepartment(string d)
{
	department = d;
}

int student::gLevel()
{
	return level;
}

float student::gGPA()
{
	return GPA;
}

string student::gDepartment()
{
	return department;
}

void student::display()
{
	person::display();
	cout << "the student level =\t" << level<<"\n";
	cout << "the student GPA =\t" << GPA << "\n";
	cout << "the student Department =\t" << department << "\n";

}
