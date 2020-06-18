#include <iostream>
#define N 6

using namespace std;

int main(void)
{
	int a[N]; 
	int	i, l, lmax, s, smax;
	for (i = 0; i < N; i++)
		cin >> a[i];
	lmax = 0;
	smax = 0;
	l = 1;
	s = a[0];
	for (i = 1; i < N; i++)
	{
		if (a[i] > a[i - 1])
		{
			l++;
			s += a[i];
		}
		else
		{
			if (l > lmax)
			{
				lmax = l;
				smax = s;
			}
			l = 1;
			s = a[i];
		}
	}
	if (l > lmax)
	{
		lmax = l;
		smax = s;
	}
	cout << smax;
	system("pause");
}