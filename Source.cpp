#include<iostream>
using namespace std;
class sample
{private:
	int x, y;
public:
	sample()
	{   x = 0;
		y = 0;}
	sample(int a, int b)
	{   x = a;
		y = b;
	}

	void show()
	{
		cout << "x=" << x << "\t" << "y=" << y << endl;
	}
	
};

class param_3
{
private:
	int x, y, z;
public:
	param_3()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	param_3(int a, int b, int c)
	{
		x = a;
		y = b;
		z = c;
	}
	void show()
	{
		cout << "x=" << x << "\t" << "y=" << y << "\t" << "z=" << z << endl;
	}
};

void main()
{	sample obj;
    sample obj1(0, 2);
	param_3 obj2;
	param_3 obj3(0, 2, 3);
	obj.show();
	obj1.show();
	obj2.show();
	obj3.show();
}