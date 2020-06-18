#include <iostream>
using namespace std;
#define N 6
int main() {
	int a[N];
	int i, m, s, p;
	for (i = 0; i < N; i++)    
		cin >> a[i];
	s = 0;
	m = 0;
	for (i = 0; i < N; i++)
	{
		if (a[i] > m)
		{
			m = a[i];
		}
	}
	for (i = 0; i < N; i++)
	{
		if (a[i] % 2 == m % 2)
		{
			s += a[i];
		}
	}
	cout << s;
	system("pause");
		return 0;	
}