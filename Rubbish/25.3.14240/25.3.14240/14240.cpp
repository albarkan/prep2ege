#include <iostream>

using namespace std;

const int N = 6;

/*��� ������, ���������� 2018 ������������� ����� �����, �� ����������� 10000. ���������� ����� � ������� ������������ �� ��� 
��������� ����� �������, ���������� � ����������������� ������ ������� ������������� ����� � ��� �� ��������.���� ����� ����� 
� ������� ���, ����� ��������� ������ ����.*/
int task14240()
{
	int a[N];
	int i, m, k;
	for (i = 0; i < N; i++)
		cin >> a[i];
	m = 0;
	for (i = 0; i < N; i++)
	{
		if ((a[i] % 10 == a[i] % 16) && a[i] > m)
		{
			m = a[i];
		}
	}
	cout << m;
	system("pause");
		return 0;
}