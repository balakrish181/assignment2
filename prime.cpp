
#include <iostream>

using namespace std;

void main()
{
	int a, b, c = 0, i;


	cout << "Enter the number to check for prime:";
	cin >> a;

	for (i = 2; i <= (a / 2); i++)
	{
		if (a % i == 0)
		{

			cout << "The given number " << a << " is not prime";
			c += 1;
			break;

		}
	}

	if (c == 0)
	{
		cout << "The given number" << a << " is  prime:";

	}
}