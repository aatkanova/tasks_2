//1.Дан массив из 10 элементов. Элементы массива вводятся с клавиатуры. 
//Написать программу, которая включает собственную функцию для замены всех четных элементов массива на 0.

#include <iostream>
using namespace std;

// Функция для замены четных элементов массива на 0
void replaceEvenWithZero(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            arr[i] = 0;
        }
    }
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

    // Замена четных элементов на 0 с помощью функции
    replaceEvenWithZero(myArray, size);

    // Вывод измененного массива
    cout << "Измененный массив:\n";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
