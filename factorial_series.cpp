#include<iostream>

using namespace std;
int fact(int i);
void main()
{
	int a, b, j, n;
	double c = 0.0;
	//cout << "To find :\n";
	//cout << "1+ ½! + ⅓! + ¼! till n terms." << endl;
	cout << "Enter the number of terms:" << endl;
	cin >> a;

	for (j = 1; j < a; j++)
	{
		c += (double)1 / (fact(j));
	}
	cout << "The value is:" << c << endl;



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
