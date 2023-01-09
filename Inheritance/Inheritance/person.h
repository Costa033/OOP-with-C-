#pragma once
#include <iostream>	
using namespace std;
#include <string>

class person
{
private:

	string name;
	string gender;
	float age;


public:

	// constructors

	person();
	person(string n, string g, float a);

	// setters

	void sName(string na);
	void sGender(string ge);
	void sAge(float ag);

	//getters

	string gName();
	string gGender();
	float gAge();

	//print

	void display();

};

