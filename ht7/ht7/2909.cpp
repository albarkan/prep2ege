/* Опишите на русском языке или на одном из языков программирования алгоритм подсчета суммы всех отрицательных элементов заданного целочисленного массива размером 30 элементов. Если отрицательных элементов нет, сообщите об этом. */

#include <iostream>
using namespace std;
#define N 6
int task2909(void)
{
    int a[N];
    int i, s;
    s = 0;
    
    for (i=0; i < N; i++)
    cin >> a[i];
    
    for (i = 0; i < N; i++)
    {
        if (a[i] < 0)
        {
            s += a[i];
        }
        else
        {
            cout << "Negative elements were not found";
        }
    }
    return 0;
}
