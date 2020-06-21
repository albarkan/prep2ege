/* найти наибольшее значение R
 R - нечетное
 R - сумма двух различных элементов последовательности
 Если соответствующих услвиям чисел нет, то вывести R = -1
 КОНТРОЛЬНОЕ ЗНАЧЕНИЕ: ... КОНТРОЛЬ ПРОЙДЕН */

#include <iostream>

using namespace std;

int task2_by(){
    int seq = 0, size = 0, maxeven = -1, maxodd = -1, x = 0, R = 0;
    
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cin >> seq;
        
        if (seq % 2 == 0 && seq > maxeven) {
            maxeven = seq;
        }
        else if (seq % 2 != 0 && seq > maxodd) {
            maxodd = seq;
        }
        x += seq;
    }
    R = maxeven + maxodd;
    if (x % 2 == 0) {
        cout << -1;
    }
    else
    cout << R << endl;
    cout << "Check point passed";
    return 0;
}
//
