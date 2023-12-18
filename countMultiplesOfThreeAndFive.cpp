//5. Дан массив из 10 элементов. Элементы массива вводятся с клавиатуры. 
//Написать программу, которая включает функцию для нахождения количества элементов кратных 3-м и 5-ти.

#include <iostream>
using namespace std;

// Функция для нахождения количества элементов кратных 3 и 5
void countMultiplesOfThreeAndFive(int arr[], int size, int &countThree, int &countFive) {
    countThree = 0;
    countFive = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] % 3 == 0) {
            countThree++;
        }
        if (arr[i] % 5 == 0) {
            countFive++;
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

    int countThree = 0, countFive = 0;

    // Нахождение количества элементов кратных 3 и 5 с помощью функции
    countMultiplesOfThreeAndFive(myArray, size, countThree, countFive);

    // Вывод количества элементов кратных 3 и 5
    cout << "Количество элементов, кратных 3: " << countThree << endl;
    cout << "Количество элементов, кратных 5: " << countFive << endl;

    return 0;
}

