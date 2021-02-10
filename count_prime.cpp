#include <iostream>

using namespace std;

void main()
{

	int a[10], b, c = 0, i, j, count = 0;


	cout << "Enter 10 numbers to count prime in the array:";

	for (j = 0; j < 10; j++)
	{
		cin >> a[j];

	}
	for (j = 0; j < 10; j++)
	{
		b = a[j];

		for (i = 2; i <= (b / 2); i++)

		{

			if (b % i == 0)

			{

				c += 1;
				break;


			}

		}
		if (c == 0)
		{
			count += 1;
		}

	}

	cout << "The number of prime numbers is:" << count << endl;


}