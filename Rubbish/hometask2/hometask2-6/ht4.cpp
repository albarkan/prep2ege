#include <iostream>
#define N 6

using namespace std;

int ht4()
{

	int i, d;
	int a[N];
	d = a[0];
	for (i = 0; i < N; i++)
		cin >> a[i];

	for (i = 0; i < N; i++)
	{
		if ((d % 10 == 3) && (a[i] > d))
		{
			d = a[i];
		}
	}
	cout << d;
	return 0;
}