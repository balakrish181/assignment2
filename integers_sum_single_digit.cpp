#include<iostream>

using namespace std;

void main()
{
	long a;
	int b, c = 0;

	cout << "Enter the number:";
	cin >> a;

	while (a > 9)
	{
		c = 0;
		while (a != 0)
		{
			b = a % 10;
			c += b;
			a = a / 10;

		}
		a = c;
		cout << a << endl;
	}
	system("pause>0");

}