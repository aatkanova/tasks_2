//4. Дан массив из 10 элементов. Элементы массива вводятся с клавиатуры. 
//Написать программу, которая включает функцию для нахождения максимального элемента массива.

#include <iostream>
using namespace std;

// Функция для нахождения максимального элемента массива
int findMaxElement(int arr[], int size) {
    int maxElement = arr[0]; // Предполагаем, что первый элемент - максимальный

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
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

    // Нахождение максимального элемента с помощью функции
    int maxElement = findMaxElement(myArray, size);

    // Вывод максимального элемента
    cout << "Максимальный элемент массива: " << maxElement << endl;

    return 0;
}
