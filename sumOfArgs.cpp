//11.Написать программу, которая включает функцию с переменным числом параметров, для нахождения 
//суммы аргументов функции.
#include <iostream>
#include <cstdarg>

// Функция для нахождения суммы всех аргументов
int sumOfArgs(int count, ...) {
    va_list args;
    va_start(args, count);

    int sum = 0;

    for (int i = 0; i < count; ++i) {
        int num = va_arg(args, int);
        sum += num;
    }

    va_end(args);

    return sum;
}

int main() {
    int result = sumOfArgs(5, 2, 5, 8, 10, 7);
    std::cout << "Сумма всех аргументов: " << result << std::endl;

    return 0;
}
