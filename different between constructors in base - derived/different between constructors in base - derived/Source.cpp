#include <iostream>
using namespace std;
#include <string>

class base
{
	int x;

public:

	base()
	{
		x = 0;
		cout << "this is base default constructor\n";
	}
};

class derived : public base
{
	int y;

public:

	derived()
	{
		y = 0;
		cout << "this is the derived default constructor\n";
	}

	derived(int i)
	{
		y = i;
		cout << "this is the second derived constructor\n";
	}
};


int main()
{
	base b1;

	derived d1;
	derived d2(5);


	return 0;

}