//7. Дан массив из 10 элементов. Элементы массива вводятся с клавиатуры. 
//Написать программу, которая включает функцию для нахождения среднего геометрического 
//значения элементов кратных 3-м и 5-ти.

#include <iostream>
#include <cmath>
using namespace std;

// Функция для нахождения среднего геометрического значений элементов кратных 3 и 5
double geometricMeanOfMultiplesOfThreeAndFive(int arr[], int size) {
    int count = 0;
    double product = 1.0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0) { // Проверка на кратность 3 и 5
            product *= arr[i];
            count++;
        }
    }

    if (count == 0) {
        cout << "Нет элементов, кратных и 3, и 5." << endl;
        return 0.0;
    }

    return pow(product, 1.0 / count); // Возврат среднего геометрического
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

    // Нахождение среднего геометрического значений элементов кратных 3 и 5 с помощью функции
    double geometricMean = geometricMeanOfMultiplesOfThreeAndFive(myArray, size);

    // Вывод среднего геометрического
    cout << "Среднее геометрическое элементов, кратных и 3, и 5: " << geometricMean << endl;

    return 0;
}
