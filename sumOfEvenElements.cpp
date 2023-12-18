//2.Дан массив из 10 элементов. Элементы массива вводятся с клавиатуры. Написать программу, которая включает 
//собственную функцию для нахождения суммы четных элементов массива.

#include <iostream>
using namespace std;

// Функция для нахождения суммы четных элементов массива
int sumOfEvenElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    const int size = 10;
    int myArray[size];

    // Ввод элементов массива с клавиатуры
    cout << "Введите " << size << " элементов массива:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> myArray[i];
    }

    // Нахождение суммы четных элементов с помощью функции
    int sumEven = sumOfEvenElements(myArray, size);

    // Вывод суммы четных элементов
    cout << "Сумма четных элементов массива: " << sumEven << endl;

    return 0;
}
