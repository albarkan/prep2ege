#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "testPr.h"


int main() {

    // task();

    int const numberSize = 110;
    char* number1 = new char[numberSize];
    char* number2 = new char[numberSize];

    number1[0] = '+';
    number2[0] = '+';

    for (auto i = 1; i < numberSize; ++i) {
        if (i == 109) {
            number1[i] = '0';
            number2[i] = '5';
            continue;
        }

        if (i == 108) {
            number1[i] = '2';
            number2[i] = '3';
            continue;
        }

        if (i == 107) {
            number1[i] = '1';
            number2[i] = '0';
            continue;
        }

        number1[i] = '0';
        number2[i] = '0';
    }

    char* result = sum(number1, number2);

    for (auto i = 0; i < numberSize; ++i) {
        std::cout << result[i];
    }
    std::cout << "\n";

    return 0;
}