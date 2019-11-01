#include <iostream>

using namespace std;

const int N = 6;
/*Опишите на языке программирования алгоритм подсчета максимального количества подряд идущих элементов, каждый из которых
больше предыдущего, в целочисленном массиве длины 30.*/
int task2903()
{
	int a[N];
	int i, max, k;
	for (i = 0; i < N; i++)
		cin >> a[i];
	k = 1;
	max = 0;
	for (i = 0; i < N - 1; i++)
	{
		if (a[i + 1] > a[i])
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
	return 0;
}