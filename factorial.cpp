
#include<iostream>

using namespace std;

int fact(int i);
void main()
{
	int a, b;
	cout << "Enter the number to find factorial:" << endl;
	cin >> a;
	cout << "The factorial of" << a << "is" << fact(a) << endl;


}
int fact(int i)
{
	if (i > 1)
	{
		return i * fact(i - 1);
	}
	else
	{
		return 1;
	}
}

