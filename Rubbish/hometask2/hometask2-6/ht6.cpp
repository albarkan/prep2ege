#include <iostream>
#define N 6

using namespace std;

int ht6()
{

	int i, d, k;
	int a[N];
	d = a[0];
	for (i = 0; i < N; i++)
		cin >> a[i];

	for (i = 0; i < N; i++)
	{
		if (d <= 30)
		{
			cout << "yes";
		}
		else
		{
			cout << "no";
		}
	}
	cout << d;
	return 0;
}