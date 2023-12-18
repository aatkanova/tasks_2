//14. Написать три функции (произведение чисел, средне арифметическое значение, сумма чисел) 
//для арифметических расчетов и оформить их в отдельном файле.

#ifndef ARITHMETIC_FUNCTIONS_H
#define ARITHMETIC_FUNCTIONS_H

// Функция для вычисления произведения чисел
double multiply(double a, double b) {
    return a * b;
}

// Функция для вычисления среднего арифметического
double average(double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

// Функция для вычисления суммы чисел
double sum(double arr[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

#endif // ARITHMETIC_FUNCTIONS_H
