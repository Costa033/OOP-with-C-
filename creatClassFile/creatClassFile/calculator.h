#pragma once
#include <iostream>
using namespace std;
#include <string>

class calculator
{
public:
	int add(int num1, int num2);
	int add(int num1, int num2 , int num3);
	int add(int num1, int num2 ,int num3 ,int num4);
	float add(float num1, int num2);
	float add(int num1, float num2);
	string add(string a, string b);


};

