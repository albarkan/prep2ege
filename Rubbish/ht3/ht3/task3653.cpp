/* Опишите на русском языке или одном из языков программирования алгоритм подсчета 
максимальногоколичества подряд идущих четных элементов в целочисленном массиве длины 30. */

#include <iostream>
#define N 6

using namespace std;

int task3653()
{
	int a[N];
	int i, max, k;

	for (i = 0; i < N; i++)
		cin >> a[i];

	k = 1;
	max = 0;

	for (i = 0; i < N - 1; i++)
	{
		if ((a[i + 1] > a[i]) && (a[i] % 2) == 0)
		{
			k++;
		}
		else
		{
			if (k > max)
			{
				max = k;
			}
			k = 1;
		}
	}
	if (k > max)
	{
		max = k;
	}
	cout << max;
	system("pause");
	return 0;
}