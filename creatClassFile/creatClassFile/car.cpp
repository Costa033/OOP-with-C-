#include "car.h"

// start with setters
void car::sMaker(string m)
{
	maker = m;
}

void car::sModel(int mod)
{
	model = mod;
}

/* 
void car::sColor(string c)
{
	color = c;
}
*/

// created with quick actions
void car::sColor(string c)
{
	color = c;
}


//time for getters
string car::gMaker()
{
	return maker;
}

int car::gModel()
{
	return model ;
}

/*
string car::gColor()
{
	return color ;
}
*/

// created with quick actions
string car::gColor()
{
	return color;
}


// constructors
car::car() : maker("ABAZA"), color("5arawy"), model(1880)  //this called initialization list
{
	/* now we will delete them because we used initialization list
	maker = "ABAZA";
	color = "5arawy";
	model = 1880;
	*/

	cout << "our default car is ABAZA model 1880 with 5arawy color \n";
}

car::car(string m, int mo, string col) : maker(m) , model(mo), color(col)
{
}

car::~car()
{
	cout << "the car class says bye bye\n";
}
