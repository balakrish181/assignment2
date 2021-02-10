#include<iostream>

using namespace std;

int c;
void prime(int a);
void prime(int a, int b);
void main()
{

	prime(3);
	prime(2, 22);
}

void prime(int a)
{
	int i;
	for (i = 2; i <= (a / 2); i++)
	{
		if (a % i == 0)
		{

			cout << "The given number " << a << " is not prime" << endl;
			c += 1;
			break;

		}
	}

	if (c == 0)
	{
		cout << "The given number" << a << " is  prime:" << endl;

	}
}

void prime(int a, int b)
{
	int count = 0, i, j;
	for (j = a; j <= b; j++)
	{


		for (i = 2; i <= (j / 2); i++)

		{

			if (j % i == 0)

			{

				c += 1;
				break;


			}

		}
		if (c == 0)
		{
			count += 1;

		}
		c = 0;
	}
	cout << "THe number of prime numbers between" << a << "and" << b << "is" << count << endl;

}

