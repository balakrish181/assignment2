#include<iostream>

using namespace std;

int i;

int add(float* b);
void main()
{
	float a[4];
	cout << "Enter four numbers:" << endl;

	for (i = 0; i < 4; i++)
	{
		cin >> a[i];

	}

	cout << "The sum of four numbers is " << add(a);

}
int add(float* b)
{
	float sum = 0;

	for (i = 0; i < 4; i++)
	{
		sum += b[i];

	}
	return sum;
}