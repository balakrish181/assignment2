#include<iostream>

using namespace std;

void main()
{
	char a[20];
	char b[5] = { 'a','e','i','o','u' };
	int i, sum = 0, j;

	cout << "Enter a string:" << endl;
	cin >> a;

	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == b[j])
			{
				sum += 1;
			}
		}
	}

	cout << "Number of vowels in the string is:" << sum << endl;


}