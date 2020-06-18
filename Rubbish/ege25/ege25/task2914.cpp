#include <iostream>
#include "25.1.h"

using namespace std;
#define N 6

void task2914()
{
	int a[N];
	int min, max, i, sum;
	float sred1, sred2;

	for (i = 0; i < N; i++)
		cin >> a[i];

	min = INT_MAX;
	max = INT_MIN;
	sum = 0;

	for (i = 0; i < N; ++i)
	{
		sum += a[i];

		if (a[i] < min)
		{
			min = a[i];
		}

		if (a[i] > max)
		{
			max = a[i];
		}
	}

	sred1 = (min + max) / 2;
	sred2 = sum / N;

	cout << sred1 - sred2;
}