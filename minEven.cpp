//10. Написать программу, которая включает функцию с переменным числом параметров, 
//для нахождения минимального аргумента среди четных аргументов функции.

#include <iostream>
#include <cstdarg>
#include <limits>

// Функция для нахождения минимального четного аргумента
int minEven(int count, ...) {
    va_list args;
    va_start(args, count);

    int minEven = std::numeric_limits<int>::max(); // Инициализируем максимальным значением типа int

    for (int i = 0; i < count; ++i) {
        int num = va_arg(args, int);
        if (num % 2 == 0 && num < minEven) {
            minEven = num;
        }
    }

    va_end(args);

    if (minEven == std::numeric_limits<int>::max()) {
        std::cout << "Нет четных чисел для нахождения минимального.\n";
        return 0;
    }

    return minEven;
}

int main() {
    int result = minEven(6, 2, 5, 8, 10, 7, 6);
    if (result != 0) {
        std::cout << "Минимальное четное число: " << result << std::endl;
    }

    return 0;
}
