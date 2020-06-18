#include <iostream>
#define N 5

using namespace std;
int main() {
	int a[N];
	int i, j, s;
	for (i = 0; i < N; i++)
		cin >> a[i];
	s = 0;
	for (i = 0; i < N; i++)
	{
		if (a[i] >= 10 && a[i] <= 99 && (a[i] / 10 > a[i] % 10))
		{
			s += a[i];
		}
	}
	cout << s;
	system("pause");
}