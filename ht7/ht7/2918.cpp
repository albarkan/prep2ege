/* Требуется составить программу, которая проверяет, является ли введённая с клавиатуры целочисленная квадратная матрица размером 10х10 "магическим квадратом", то есть равны ли между собой суммы элементов каждой строки, каждого столбца и суммы элементов каждой диагонали. */

#include <iostream>
using namespace std;

#define n 3

int task2918()
{
    int i, sumCol, sumDia, sumLine, j;
    int arr[n][n];
    sumCol = 0;
    sumDia = 0;
    sumLine = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < n; ++i)
        {
                sumCol += arr[i][1];
            }
            for (i = 0; i < n; i++)
            {
                sumDia += arr[i][i];
            }

            for (i = 0; i < n; i++)
            {
                sumDia += arr[i][n - i - 1];
                if ((n % 2) != 0)
                {
                    sumDia -= arr[n / 2][n / 2];
                }
            }
    for (i = 0; i < n; i++)
    {
        sumLine += arr[i + 1][i];
    }
    if (sumDia == sumCol && sumLine == sumCol)
    {
        cout << "thats square id magical!!";
    }
    return 0;
        }

