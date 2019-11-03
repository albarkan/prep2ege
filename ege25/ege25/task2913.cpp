// Опишите на русском языке или на одном из языков программирования алгоритм подсчета максимального количества подряд идущих
//отрицательных элементов в заданном целочисленном массиве длиной 30.

#include <iostream>
#define N 6

using namespace std;

int task2913()
{
	int arr[N];
	int i, max, k;
	for (i = 0; i < N; i++)
		cin >> arr[i];
	k = 0;
	max = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] < 0)
		{
			k++;

			if (max < k) // -1 -2 3 -1 -2 -3
			{
				max = k;
			}			
		}
		else
		{
			k = 0;
		}
	}
	cout << max;
	return 0;
}