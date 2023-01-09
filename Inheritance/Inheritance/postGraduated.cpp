#include "postGraduated.h"

postGraduated::postGraduated(string n, string g, float a, int le, float gg, string depa, string resArea) : student (n,g,a,le,gg,depa)
{
	researchArea = resArea;
}

void postGraduated::display()
{
	student::display();
	cout << "the post graduated student research area is " << researchArea << "\n";
}
