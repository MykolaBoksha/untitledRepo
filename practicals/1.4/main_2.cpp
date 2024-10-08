#include <iostream>
#include <cmath>  // Для використання функції pow

int main() {
    double b1, q;
    int n;
    
    // Введення даних
    std::cout << "Введіть перший член прогресії (b1): ";
    std::cin >> b1;
    std::cout << "Введіть знаменник прогресії (q): ";
    std::cin >> q;
    std::cout << "Введіть кількість елементів (n): ";
    std::cin >> n;

    double Sn;  // Змінна для зберігання суми елементів
    
    // Якщо q == 1, сума елементів обчислюється окремо
    if (q == 1) {
        Sn = n * b1;
    } else {
        // Використовуємо формулу для суми геометричної прогресії
        Sn = b1 * (1 - pow(q, n)) / (1 - q);
    }
    
    // Обчислюємо середнє арифметичне
    double S_avg = Sn / n;

    // Виведення результату
    std::cout << "Середнє арифметичне перших " << n << " елементів: " << S_avg << std::endl;

    return 0;
}