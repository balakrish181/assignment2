#include<iostream>

using namespace std;

void main()
{

	int a[10], odd = 0, even = 0;
	int i;

	cout << "Enter ten numbers:";
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];

	}

	for (i = 0; i < 10; i++)
	{
		if (a[i] % 2 == 0)
		{
			even += 1;
		}
		else
		{
			odd += 1;
		}
	}

	cout << "Number of even numbers in array is:" << even << endl;
	cout << "Number of odd numbers in array is:" << odd << endl;
	system("pause>0");
}