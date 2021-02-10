
#include <iostream>

using namespace std;

void main()
{
	int a[5], sum_even = 0, sum_odd = 0;
	int i;
	cout << "Enter the numbers in array" << endl;

	for (i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < 5; i++);
	{
		if (a[i] % 2 == 0)
		{
			sum_even += a[i];
		}
		else
		{
			sum_odd += a[i];
		}
	}

	cout << "Sum of even number in the array is:" << sum_even << endl;
	cout << "Sum of odd numbers in the array is:" << sum_odd << endl;
}

