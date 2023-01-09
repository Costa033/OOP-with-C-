#include <iostream>
using namespace std;



class rectangle
{
private:
	float length;
	float width;


public:

	// operation to set a length value
	void sLength(float L)
	{
		if (L > 0)
			length = L;
		else
			cout << "please enter a positive number";
	}


	// operation to return the length value
	float gLength()
	{
		return length;
	}


	// operation to set a width value
	void sWidth(float W)
	{
		if (W > 0)
			width = W;
		else
			cout << "please enter a positive number";
	}


	// operation to return the width value
	float gWidth()
	{
		return width;
	}


	// operation to return the AREA of the rectangle
	float gArea()
	{
		return length * width;
	}

};


// OUR MAIN
int main()
{
	rectangle box;

	box.sLength(40.5);
	box.sWidth(10.0);

	cout << "the rectangle area is = \t" << box.gArea() << "\n";

	return 0;

}