#include <iostream>
#define N 6

using namespace std;

int ht2()
{
	int i, d, k;
	int a[N];
	for (i = 0; i < N; i++)
		cin >> a[i];
	d = 0;
	k = 0;
	for (i = 0; i < N; i++)
	{
		while (d > 0)
		{
			if (d % 6)
			{
				k = d + k;
			}
		}
	}
	cout << k;
	return 0;
}