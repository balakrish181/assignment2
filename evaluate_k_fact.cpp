#include<iostream>

using namespace std;

int fact(long i);
void main()
{
	long a, b, c;
	double k;

	cout << "Enter the value of a,b,c to evaluate a!/(b+c)!";
	cin >> a >> b >> c;

	k = (double)fact(a) / fact(b + c);
	cout << "The value of k is:\t" << k << endl;



}
int fact(long i)
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