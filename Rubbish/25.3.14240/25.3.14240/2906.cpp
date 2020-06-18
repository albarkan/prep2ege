#include <iostream>

using namespace std;

const int N = 6;
/*Опишите на русском языке или одном из языков программирования алгоритм подсчета максимального количества подряд идущих
четных элементов в целочисленном массиве длины 30.*/
int task2906()
{
	int a[N];
	int i, k, maxEven;
	for (i = 0; i < N; i++)
		cin >> a[i];
	k = 0;
	maxEven = 0;
	for (i = 0; i < N; i++)
	{
		if (a[i] % 2 == 0)
		{
			k++;
		}
		else // 0 1 -1 2 4 6
		{
			if (k > maxEven)
			{
				maxEven = k;
			}
			k = 0;
		}
	}
	if (k > maxEven)
	{
		maxEven = k;
	}
	cout << maxEven;
	return 0;
}