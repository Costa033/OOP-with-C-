#include <iostream>
using namespace std;

#include "rectangle.h"

void rectangle::sLength(float l)
{
	length = l;
}

void rectangle::sWidth(float w)
{
	width = w;
}

float rectangle::gLength()
{
	return length;
}

float rectangle::gWidth()
{
	return width;
}

float rectangle::gArea()
{
	return length*width;
}

rectangle rectangle::merge(rectangle rec3)
{
	rectangle resul;
	resul.length = length + rec3.length;
	resul.width = width + rec3.width;
	return resul;


}

rectangle::rectangle(float len, float wid) : length(len) , width(wid)
{
	//cout << "please enter the initial length and width of the rectangle";
}

rectangle::~rectangle()
{
	cout << "from the rectangle destructor we want to say GOODBYE";
}
