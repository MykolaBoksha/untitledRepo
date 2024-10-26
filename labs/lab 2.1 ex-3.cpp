// lab 2.1 ex 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Микола Бокша 121


#include <iostream>
#include <vector>
#include <algorithm> // Для max_element

using namespace std;

int main() {
    setlocale(0, "");
    
    const int chislo1 = 4;
    const int chislo2 = 5;
    double arr[chislo1][chislo2]{};

    vector<double> maxValues(chislo1);

    // Ініціалізація двовимірного масиву за заданими правилами
    for (int i = 0; i < chislo1; ++i) {
        for (int j = 0; j < chislo2; ++j) {
            if (i % 2 == 0) {
                arr[i][j] = i + 5; // Для парних i
            }
            else {
                arr[i][j] = 2 * i + 3; // Для непарних i
            }
            cout << arr[i][j] << "\t";
        }
        cout <<endl;
    }

    // Обчислення максимальних значень у кожному рядку
    for (int i = 0; i < chislo1; ++i) {
        maxValues[i] = *max_element(arr[i], arr[i] + chislo2);
    }

    // Виведення одновимірного масиву з максимальними значеннями
    cout << "Максимальнi значення в кожному рядку:\n";
    for (int i = 0; i < chislo1; ++i) {
        cout << maxValues[i] << " ";
    }
    cout << endl;

    return 0;
}

