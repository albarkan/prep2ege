/* Дан вещественный массив из 50 элементов. Элементы массива могут принимать произвольные значения. Опишите на русском языке или на одном из языков программирования алгоритм, который находит и выводит наименьший номер отрицательного элемента массива или сообщение, что такого элемента нет. */

#include <iostream>
using namespace std;
#define N 6

int task3602(void)
{
    float a[N];
    int i, j = 0;
    
    for (int i = 0; i < N; i++)
    cin >> a[i];
    
    for (i = 0; i < N; i++)   // -1 2 -1 3 4 -5
    {
        if (a[i] < 0)
        {
            j = 1;
            cout << i;
            return 0;
        }
    }
    if (j == 0)
    {
        cout << "number not found";
    }
    return 0;
}
