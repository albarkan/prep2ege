// CycleWhile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

int while3();
int while4();
int while5();
int while6();
int while7();

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    while7();
    return 0;
}

/* While3. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а 
также остаток от этого деления. */
int while3()
{
    int n, k, t = 0;

    cin >> n >> k;
    while (n - k >= 0) // n = 5, k = 3.
    {
        t++;
        n -= k;
    }
    cout << "Частное от деления: " << t;
    return 0;
}

/* Дано целое число N (> 0). Если оно является степенью числа 3, то вы- вести True, если не является — вывести False. */
int while4()
{
    int n = 0;

    cin >> n;

    while (n != 1)
    {
        if (n % 3 == 0) 
        {
            n /= 3;
        }
        else 
        {
            break;
        }
    }

    if (n == 1) 
    {
        cout << "Степень тройки" << endl;
    }
    else
    {
        cout << "Не степень тройки" << endl;
    }

    return 0;
}

/*  While5. Дано целое число N (> 0), являющееся некоторой степенью числа 2: K
    N = 2 . Найти целое число K — показатель этой степени. */
int while5()
{
    int n = 0, k = 0;

    cin >> n;

    while (n != 1) 
    {
        k++; 
        n /= 2;
    }

    cout << k;

    return 0;
}

/*
 Дано целое число N (> 0). Найти двойной факториал N:
N!! = N·(N–2)·(N–4)·…
(последний сомножитель равен 2, если N — четное, и 1, если N — нечетное).
*/
int while6()
{
    int number = 0;
    cin >> number;

    int doubleFactorial = 1;

    while (number != 1 && number != 0)
    {
        doubleFactorial *= number;

        number -= 2;
    }

    cout << doubleFactorial << endl;

    return 0;
}

/*
Дано целое число N (> 0). Найти наименьшее целое положительное
число K, квадрат которого превосходит N: K2
 > N. Функцию извлечения
квадратного корня не использовать.
*/
int while7()
{
    int k = 0, n = 0;

    cin >> n;

    while (k * k <= n)
    {
        k++;
    }

    cout << k << endl;

    return 0;
}