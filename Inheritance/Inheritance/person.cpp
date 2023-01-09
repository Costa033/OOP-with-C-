#include "person.h"
#include <iostream>	
using namespace std;
#include <string>

// CONSTRUCTORS

person::person()
{
	name = "unknown";
	gender = "unknown";
	age = 0;
}

person::person(string n, string g, float a)
{
	name = n;
	gender = g;
	age = a;
}


//SETTERS

void person::sName(string na)
{
	name = na;

}

void person::sGender(string ge)
{
	gender = ge;
}

void person::sAge(float ag)
{
	age = ag;
}


//GETTERS

string person::gName()
{
	return name;
}

string person::gGender()
{
	return gender;
}

float person::gAge()
{
	return age;
}

//PRINT

void person::display()
{
	cout << "the person name is \t" << name << "\n";
	cout << "the person gender is \t" << gender << "\n";
	cout << "the person age is \t" << age << "\n";
}
