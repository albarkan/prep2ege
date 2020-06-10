

/* Дан целочисленный массив из 30 элементов. Элементы массива могут принимать целые значения от 0 до 10000 включительно. Опишите на естественном языке или на 
// одном из языков программирования алгоритм, позволяющий найти и вывести произведение двузначных элементов массива, с суммой цифр не кратной 6. Гарантируется, что в исходном массиве есть хотя бы один элемент, значение которого является двузначным числом, и при этом сумма его цифр не делится на 6. Исходные данные объявлены так, как показано ниже на примерах для некоторых языков программирования и естественного языка. */

#include <iostream>
#define N 6
using namespace std;

int task6588()
{
    int i, p;
    p = 1;
    i = 0;
    int A[N];
    
    for (i = 0; i < N; i++)
        cin >> A[i];
    
    for ( i= 0; i < N; i++)
    {
        if(((A[i] % 10 + A[i] / 10) % 6 != 0) && A[i] >= 10 && A[i] <= 99)
        {
            p *= A[i];
        }
    }
    cout << p;
    return 0;
}
