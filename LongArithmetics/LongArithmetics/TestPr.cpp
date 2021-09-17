#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "testPr.h"

void task() {
    std::ifstream in("in.txt");
    std::vector<std::pair<std::string, int>> v = {};

    if (in.is_open()) {
        std::string number;

        bool numberIsInVector = false;
        while (getline(in, number)) {
            for (auto& pair : v) {
                if (pair.first == number) {
                    ++pair.second; 
                    numberIsInVector = true;
                    break;
                }
            }
            if (!numberIsInVector) {
                v.push_back(std::make_pair(number, 1));
            }
            numberIsInVector = false;
        }

        in.close();
    }
    else { std::cout << "File haven't opened" << "\n"; }
    in.close();

    std::ofstream out;
    out.open("out.txt");
    if (out.is_open()) {
        for (auto iter = v.begin(); iter != v.end(); ++iter)
        {
            out << (*iter).first << "\t";
            for (auto i = 0; i < (*iter).second; ++i) {
                out << "*";
            }
            out << '\n';
        }

    }
    else { std::cout << "File haven't opened" << "\n"; }
    out.close();
}

char* sum(char* number1, char* number2) {
    int const numberSize = 110;

    char* sum;

    if (number1[0] == number2[0]) {
        sum = new char[numberSize];
        sum[0] = number1[0];

        auto temp = 0;
        for (auto i = numberSize - 1; i > 0; --i) {
            int tempSum = int(number1[i] - '0') + int(number2[i] - '0') + temp;
            temp = (tempSum >= 10) ? 1 : 0;
            sum[i] = char((int(number1[i] - '0') + int(number2[i] - '0') % 10) + '0');
        }
    }
    else {
        int equalityOrNot = equalByMod(number1, number2);
        sum = substraction(number1, number2);
    }

    return sum;
}

int equalByMod(char* number1, char* number2) {
    int const numberSize = 110;

    for (auto i = 1; i < numberSize; ++i) {
        if (number1[i] != number2[i]) {
            if (int(number1[i] - '0') > int(number2[i] - '0')) {
                return 1;
            }
            
            return -1;
        }
    }

    return 0;
}

char* substraction(char* number1, char* number2) {
    int const numberSize = 110;
    char* result = new char[numberSize];

    int equalityOrNot = equalByMod(number1, number2);

    // Не обрабатывается случай, когда первое число меньше по модулю.

    if (equalityOrNot == 0) {
        result[0] = '+';
        for (auto i = 1; i < numberSize; ++i) {
            result[i] = '0';
        }
    }
    else if (equalByMod > 0) {
        result[0] = number1[0];
    }
    else {
        result[0] = number2[0];
    }

    int digitIndex = numberSize + 1;
    for (auto i = numberSize - 1; i > 1; --i) {
        int temp = int(number1[i] - '0') - int(number2[i] - '0');
        
        if (digitIndex < i) {
            temp += 9;
        }

        if (i == digitIndex) {
            temp -= 1;
        }

        if (temp < 0) {
            for (auto j = i - 1; i > 1; --j) {
                if (int(number1[0] - '0') > 0) {
                    digitIndex = j;
                    break;
                }
            }

            temp += 10;
        }

        result[i] = char(temp - '0');
    }

    return result;
}