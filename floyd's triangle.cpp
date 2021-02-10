#include<iostream>

using namespace std;

void main()
{

	int i, a = 1, b, j, n;
	cout << "Enter the number of rows:";
	cin >> n;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{

			cout << a << "\t";
			a++;
		}
		cout << endl;
	}
}