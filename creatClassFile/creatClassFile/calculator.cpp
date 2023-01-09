#include "calculator.h"

int calculator::add(int num1, int num2)
{
    return num1 + num2;
}

int calculator::add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int calculator::add(int num1, int num2, int num3, int num4)
{
    return num1 + num2 + num3+ num4 ;
}

float calculator::add(float num1, int num2)
{
    return num1 + num2 ;
}

float calculator::add(int num1, float num2)
{
    return num1 + num2 ;
}

string calculator::add(string a, string b)
{
    return a + "" + b;
}
