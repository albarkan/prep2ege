// 19_04_2020_task27.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void task_9708();
void task_6202();
void task_13754();

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    task_13754();
}

// Последовательность натуральных чисел характеризуется числом Х — наибольшим числом, кратным 14 и 
// являющимся произведением двух элементов последовательности с различными номерами.
void task_9708()
{
    int size = 0;
    int seq = 0;
    int kr2 = 0;
    int kr7 = 0;
    int kr14 = 0;
    int max = 0;
    int productKr14 = 0;

    cin >> size;

    for (int i = 0; i < size; ++i)
    {
        cin >> seq;

        if (seq % 14 == 0 && seq > kr14)
        {
            kr14 = seq;
        }
        else if (seq % 2 == 0 && seq % 14 != 0 && seq > kr2)
        {
            kr2 = seq;
        }
        else if (seq % 7 == 0 && seq % 14 != 0 && seq > kr7)
        {
            kr7 = seq;
        }
        else if (seq > max)
        {
            max = seq;
        }
    }

    if (kr2 * kr7 > kr14 * max)
    {
        productKr14 = kr2 * kr7;
    }
    else
    {
        productKr14 = kr14 * max;
    }

    if (kr14 * kr2 > productKr14)
    {
        productKr14 = kr14 * kr2;
    }

    if (kr14 * kr7 > productKr14)
    {
        productKr14 = kr14 * kr7;
    }

    cout << productKr14 << endl;
}

// По каналу связи передаются данные в виде последовательности положительных целых чисел. 
// Количество чисел заранее неизвестно, но не менее двух, признаком конца данных считается число 0. 
// После данных передаётся контрольное значение. Оно равно такому максимально возможному произведению 
// двух чисел из переданного набора, которое делится на 7, но не делится на 49. Если такое произведение 
// получить нельзя, контрольное значение считается равным 1.
void task_6202()
{
    int kr7 = 0;
    int notKr7 = 0;
    int number = 0;
    int count = 0;

    cin >> number;

    while (number != 0)
    {
        if (number > kr7 && number % 7 == 0 && number % 49 != 0)
        {
            kr7 = number;
        }
        else if (number > notKr7 && number % 7 != 0)
        {
            notKr7 = number;
        }
        
        cin >> number;
        ++count;
    }

    int controlValue = 0;
    cin >> controlValue;
    cout << "Введено чисел " << count << endl;
    cout << "Контрольное значение " << controlValue;
    int controlValueCalculated = 1;
    if (kr7 != 0)
    {
        controlValueCalculated = kr7 * notKr7;
    }
    cout << "Вычисленное контрольное значение " << controlValueCalculated << endl;
    if (controlValueCalculated == controlValue)
    {
        cout << "Значения совпали" << endl;
    }
    else
    {
        cout << "Значения не совпали" << endl;
    }
}

// На вход программы поступает последовательность из N целых положительных чисел, все числа в 
// последовательности различны. Рассматриваются все пары различных элементов последовательности 
// (элементы пары не обязаны стоять в последовательности рядом, порядок элементов в паре не важен). 
// Необходимо определить количество пар, для которых произведение элементов делится на 26.
void task_13754()
{
    int kr2 = 0;
    int kr13 = 0;
    int kr26 = 0;
    int rest = 0;
    int pairs = 0;
    int N = 0;
    int num = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (num % 26 == 0)
        {
            ++kr26;
        }
        else if (num % 13 == 0)
        {
            ++kr13;
        }
        else if (num % 2 == 0)
        {
            ++kr2;
        }
        else
        {
            ++rest;
        }
    }

    rest += kr2 + kr13;

    pairs = kr2 * kr13 + rest * kr26 + kr26 * (kr26 - 1) / 2;
    cout << pairs << endl;

}