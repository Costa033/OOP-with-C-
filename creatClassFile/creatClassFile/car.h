#pragma once
#include <iostream>
using namespace std;
#include<string>



class car
{
	//start with attributes (data)
private:
	string maker;
	int model;
	string color;

	//operations (methods)
public:

	// let's begin with setters operations
	void sMaker(string m);
	void sModel(int mod);
	void sColor(string c);

	// second getter operations
	string gMaker();
	int gModel();
	string gColor();


	// let's creat a constructor
	car();
	car(string m, int mo, string col);
	~car();

};

