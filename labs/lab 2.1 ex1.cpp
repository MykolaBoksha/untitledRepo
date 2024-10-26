#include <iostream>
#include <algorithm> //для сортування 

using namespace std;
int main() {
    setlocale(0, ""); //для мови

    // 1. опис массиву
    int arr[11]{};

    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {
            arr[i] = 6 * i - 9; // парний
        }
        else {
            arr[i] = -9 + 2 * i; // не парний
        }
    }

    // 3. вивод звичвйного массива
    cout << "массив: ";
    for (int i = 0; i < 11; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + 11); //сортування

    cout << "Массив пiсля сортування: "; //після сортування
    for (int i = 0; i < 11; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

