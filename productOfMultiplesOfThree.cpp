//8. Дан массив из 10 элементов. Элементы массива вводятся с клавиатуры. 
//Написать программу, которая включает функцию для нахождения произведения элементов кратных 3-м.
#include <iostream>
using namespace std;

// Функция для нахождения произведения элементов кратных 3
long long productOfMultiplesOfThree(int arr[], int size) {
    long long product = 1LL; // Инициализируем произведение единицей типа long long

    for (int i = 0; i < size; ++i) {
        if (arr[i] % 3 == 0) { // Проверка на кратность 3
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

    // Нахождение произведения элементов кратных 3 с помощью функции
    long long productMultiplesOfThree = productOfMultiplesOfThree(myArray, size);

    // Вывод произведения элементов кратных 3
    cout << "Произведение элементов массива, кратных 3: " << productMultiplesOfThree << endl;

    return 0;
}
