//13. Написать программу, которая включает функцию с переменным числом параметров 
//для нахождения произведения аргументов функции.

#include <iostream>
#include <cstdarg>

// Функция для нахождения произведения всех аргументов
long long productOfArgs(int count, ...) {
    va_list args;
    va_start(args, count);

    long long product = 1LL; // Инициализируем произведение единицей типа long long

    for (int i = 0; i < count; ++i) {
        int num = va_arg(args, int);
        product *= num;
    }

    va_end(args);

    return product;
}

int main() {
    long long result = productOfArgs(5, 2, 5, 8, 10, 7);
    std::cout << "Произведение всех аргументов: " << result << std::endl;

    return 0;
}
