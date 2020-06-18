#include "25.1.h"
#include <iostream>

using namespace std;

#define N 6

void task9811()
{
	int a[N];
	int i, j, k;
	for (i = 0; i < N; i++)
		cin >> a[i];

	j = INT_MAX;

	for (i = 1; i < N - 1; i++)
	{
		if (a[i - 1] > a[i] && a[i] < a[i + 1])
		{
			if (a[i] < j)
			{
				j = a[i];
			}
		}
	}

	if (j == INT_MAX)
	{
		cout << 0;
	}
	else
	{
		cout << j;
	}
}