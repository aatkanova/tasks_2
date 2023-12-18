//6.Дан массив из 10 элементов. Элементы массива вводятся с клавиатуры. Написать программу, которая включает функцию для нахождения произведения 
//нечетных элементов массива.
#include <iostream>
using namespace std;

// Функция для нахождения произведения нечетных элементов массива
int productOfOddElements(int arr[], int size) {
    int product = 1; // Инициализируем произведение единицей

    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) { // Проверка на нечетность
            product *= arr[i];
        }
    }

    return product;
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

    // Нахождение произведения нечетных элементов с помощью функции
    int productOdd = productOfOddElements(myArray, size);

    // Вывод произведения нечетных элементов
    cout << "Произведение нечетных элементов массива: " << productOdd << endl;

    return 0;
}
