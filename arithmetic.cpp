//14. Написать три функции (произведение чисел, средне арифметическое значение, сумма чисел) 
//для арифметических расчетов и оформить их в отдельном файле.
#include <iostream>
#include "arithmetic.h"

int main() {
    double numbers[] = { 2.5, 3.7, 8.9, 5.1, 1.2 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Произведение чисел: " << multiply(5.5, 2.0) << std::endl;
    std::cout << "Среднее арифметическое: " << average(numbers, size) << std::endl;
    std::cout << "Сумма чисел: " << sum(numbers, size) << std::endl;

    return 0;
}
