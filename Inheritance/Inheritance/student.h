#pragma once
#include "person.h"
class student : public person

{
private:
	string department;
	int level;
	float GPA;


public:

	//CONSTRUCTORS AND CALL BASE CLASS CONSTRUCTOR

	student(string n, string g, float a , int le , float gg , string depa) ;
	

	//SETTERS
	void sLevel(int l);
	void sGPA(float G);
	void sDepartment(string d);

	//GETTERS
	int gLevel();
	float gGPA();
	string gDepartment() ;

	//OVERRIDING DISPLAY
	void display();

};

