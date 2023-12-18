//9.Написать программу, которая включает функцию с переменным числом параметров, 
//для нахождения среднеарифметического значения четных аргументов функции.

#include <iostream>
#include <cstdarg>

// Функция для нахождения среднеарифметического значения четных аргументов
double averageOfEven(int count, ...) {
    va_list args;
    va_start(args, count);

    int sum = 0;
    int countEven = 0;

    for (int i = 0; i < count; ++i) {
        int num = va_arg(args, int);
        if (num % 2 == 0) {
            sum += num;
            countEven++;
        }
    }

    va_end(args);

    if (countEven == 0) {
        std::cout << "Нет четных чисел для вычисления среднего.\n";
        return 0.0;
    }

    return static_cast<double>(sum) / countEven;
}

int main() {
    double result = averageOfEven(6, 2, 5, 8, 10, 7, 6);
    std::cout << "Среднее арифметическое четных чисел: " << result << std::endl;

    return 0;
}
