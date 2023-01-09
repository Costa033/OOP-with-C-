#include "distance.h"
#include <iostream>
using namespace std;


distance::distance() : feets(0) , inches(0.0)
{
}

distance::distance(int f, float i): feets(f) , inches (i)
{
}

void distance::sDis(int f, float i) 
{
	feets = f;
	inches = i;
}

void distance::gDis()
{
	cout << "the distance is equal\t" << feets << " feets\t" << inches << "inches \n";

}

distance distance::add_distances(distance d5)
{
	distance result;

	result.feets = feets + d5.feets;
	result.inches = inches + d5.inches;

}

distance::~distance()
{
	cout << "GOODBYE";

}
