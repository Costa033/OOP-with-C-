#pragma once
#include <iostream>
using namespace std;

class rectangle
{
private:
	float length;
	float width;


public:
	void sLength(float l);
	void sWidth(float w);

	float gLength();
	float gWidth();
	float gArea();

	rectangle merge(rectangle rec3);


	//constructor
	rectangle(float len , float wid);  //iam asking the user to set the initial value of length and width with constructor
	
	//destructor
	~rectangle();

};

