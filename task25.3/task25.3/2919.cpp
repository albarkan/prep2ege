#include <iostream>

using namespace std;

#define N 6

int task2919()
{
	int a[N];
	int i, max, k;
	for (i = 0; i < N; i++)
		cin >> a[i];
	
	max = 0;

	for (i = 0; i < N; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	cout << max << endl;

	for (i = 0; i < N; i++)
	{
		if (a[i] == max)
		{
			cout << i << endl;
		}
	}
		return 0;
}