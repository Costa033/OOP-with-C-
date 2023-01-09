#pragma once
#include "student.h"
class postGraduated : public student
{
private:

	string researchArea;

public:

	postGraduated(string n, string g, float a, int le, float gg, string depa, string resArea);

	void display();
};

