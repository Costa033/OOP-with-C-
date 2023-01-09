#pragma once
#include <iostream>
using namespace std;
#include <string>

class distance
{
private:
	int feets;
	float inches;

public:
	distance();
	distance(int f, float i);

	void sDis (int f, float i);
	void gDis();

	distance add_distances(distance d5);

	~distance();

};

