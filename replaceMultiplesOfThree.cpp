//3. Дан массив из 10 элементов. Элементы массива вводятся с клавиатуры. 
//Написать программу, которая включает функцию для замены всех элементов кратных 3-м на 3.

#include <iostream>
using namespace std;

// Функция для замены элементов кратных 3 на 3
void replaceMultiplesOfThree(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 3 == 0) {
            arr[i] = 3;
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

    // Замена элементов кратных 3 на 3 с помощью функции
    replaceMultiplesOfThree(myArray, size);

    // Вывод измененного массива
    cout << "Измененный массив:\n";
    for (int i = 0; i < size; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
