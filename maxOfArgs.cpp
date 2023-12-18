//12. Написать программу, которая включает функцию с переменным числом параметров, 
//для нахождения максимального аргумента функции.

#include <iostream>
#include <cstdarg>
#include <limits>

// Функция для нахождения максимального аргумента
int maxOfArgs(int count, ...) {
    va_list args;
    va_start(args, count);

    int maxArg = std::numeric_limits<int>::min(); // Инициализируем минимальным значением типа int

    for (int i = 0; i < count; ++i) {
        int num = va_arg(args, int);
        if (num > maxArg) {
            maxArg = num;
        }
    }

    va_end(args);

    return maxArg;
}

int main() {
    int result = maxOfArgs(6, 2, 5, 8, 10, 7, 6);
    std::cout << "Максимальный аргумент: " << result << std::endl;

    return 0;
}
