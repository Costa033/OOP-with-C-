
#include <iostream>	
using namespace std;
#include <string>
#include "person.h"
#include "student.h"
#include "postGraduated.h"


int main()
{
	// SOME OPERATIONS ON PERSON CLASS

	/*
	person p1("costa", "dakar", 24.5);
	p1.display();

	p1.sName("AbdelrahmanCosta");
	p1.display();

	p1.sAge(26.5);
	cout << "the person age is equal \t" << p1.gAge() << "\n";
	*/

	//SOME OPERATIONS ON INHERITANCE (STUDENT CLASS)

	/*
	student s1;
	s1.sAge(24);
	s1.sName("costakeke");
	s1.display();
	*/

	/*
	student s1("abdo", "male", 24.9, 7, 3.98, "mechatronics");

	float GP;
	cout << "plz enter the student GPA\n";
	cin >> GP;

	s1.sGPA(GP);
	cout << "the student GPA =\t" << s1.gGPA() << "\n";
	*/

	//s1("abdo", "male", 24.9, 7, 3.98, "mechatronics");

	/*
	cout << "the student department is \t" << s1.gDepartment() << "\n";

	s1.display();
	*/



	//MULTI LEVEL INHERITANCE
	postGraduated pg1("abdo", "male", 23.2, 4, 3.66, "meca", "shafts");

	pg1.display();

}
