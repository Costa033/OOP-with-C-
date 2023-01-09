#include <iostream>
using namespace std;
#include <string>
#include "salesman.h"
#include "engineer.h"

void main()
{
	salesman sm("essam", 1929, 4090, 12542, 0.05);

	//sm.setCommitionRate(0.2);

	sm.print();
	sm.setCommitionRate(0.2);

	sm.print();


	engineer e1("Abdelrahman", 1929, 4090, "Mechanical Tezayn", 2, 3, 20.9);

	e1.print();

	e1.setOvertimeHoursRate(120);
	e1.print();
}