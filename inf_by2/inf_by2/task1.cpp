/* Поступает последовательность из N натуральных чисел. Определить, с какой цифры реже всего начинается десятичная запись чисел. Если таких чисел несколько, то вывести наименьшее*/

#include <iostream>
#define N 9

using namespace std;

int task1(){
    int arr[N], seq = 0, size, min, rez = 0;
    for (int i = 1; i <= N; i++) {
        arr[i] = 0;
    }
    cin >> size;
    for (int i = 1; i < size + 1 ; i++) {
        cin >> seq;
        
        while (seq > 9){
            seq /= 10;
        }
         arr[seq]++;
    }
    min = INT_MAX;
    for (int i = 1; i < size + 1; i++) {
        if (arr[i] < min && arr[i] > 0) {
            min = arr[i];
            rez = i;
        }
    }
    cout << rez;
    return 0;
}
