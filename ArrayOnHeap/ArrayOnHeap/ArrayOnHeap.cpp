// ArrayOnHeap.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

/* Дан набор из N целых положительных чисел. Из этих чисел формируются все возможные пары (парой считаются два элемента, 
которые находятся на разных местах в наборе, порядок чисел в паре не учитывается), в каждой паре вычисляются сумма и 
произведение элементов. Необходимо определить количество пар, у которых сумма чётна, а произведение делится на 3. */

int task15812_4() {
    int size = 0, kr3c = 0, kr3n = 0, even = 0, odd = 0, num = 0;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int seq = 0;
        cin >> seq;

        if (seq % 3 == 0 && seq % 2 == 0) {
            kr3c++;
        }
        else if (seq % 3 == 0 && seq % 2 != 0) {
            kr3n++;
        }
        else if (seq % 3 != 0 && seq % 2 == 0) {
            even++;
        }
        else if (seq % 3 != 0 && seq % 2 != 0) {
            odd++;
        }
    }
    num = kr3c * even + kr3n * odd + kr3c * (kr3c - 1) + kr3n * (kr3n - 1);
    cout << num;
    return 0;
}

int main()
{
    int size = 0;
    cin >> size;

    int* arr = new int[size]; // выделение памяти

    for (int i = 0; i < size; ++i)
    {
        arr[i] = i;
    }

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << endl;
    }

    delete[] arr; // перед return 0 (то есть тогда, когда массив больше не нужен)

    return 0;
}