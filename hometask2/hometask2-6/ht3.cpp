#include <iostream>
#define N 6

using namespace std;

int ht3()
{

	int i, d, k;
	int a[N];
	d = a[0];
	for (i = 0; i < N; i++)
		cin >> a[i];

	for (i = 0; i < N; i++)
	{
		if ((d % 3 == 0) && (a[i] < d))
		{
			d = a[i];
		}
	}
	cout << d;
	return 0;
}