#include <iostream>
using namespace std;
#include <string>

class employee 
{
private:

	string name;
	string job;
	float salary;

public:

	employee(string na, string jo, float sa)
	{
		name = na;
		job = jo;
		salary = sa;
	}

	//setters
	void sName(string n)
	{
		name = n;
	}

	void sJob(string j)
	{
		job = j;
	}
	void sSalary(int s)
	{
		salary = s;
	}
	
	//GETTERS

	string gName()
	{
		return name;
	}
	string gJob()
	{
		return job;
	}
	float gSalary()
	{
		return salary;
	}


};
class student
{
private:

	string name;
	
	int id;

public:

	student(string nam, int idd)
	{
		name = nam;
		id = idd;

	}

	//setters
	void sName(string n)
	{
		name = n;
	}

	void sId(int i)
	{
		id = i;
	}

	//GETTERS

	string gName()
	{
		return name;
	}
	
	float gId()
	{
		return id;
	}

};
class researchStudent : public employee, public student
{
public:

	researchStudent(string na, string jo, float sa, /*string nam,*/ int idd) : employee(na, jo, sa), student(na, idd)
	{

	}


};


void main()
{

	researchStudent rs1("abdo", "engineer", 4090, 1929);

	cout << rs1.gId() << "\t" << rs1.employee::gName() << "\t" << rs1.gJob()<<"\t";

}