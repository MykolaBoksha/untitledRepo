//Микола Бокша 121
#include <iostream>
#include <string>

using namespace std;

// Структура для студентів
struct Student {
    string name;      // Ім'я студента
    int course;       // Курс студента
    bool stipendia;   // Наявність стипендії
    bool music;       // Чи займається студент музикою
};

int main() {
    setlocale(0, "");

    // Ініціалізація масиву студентів
    Student students[7] = {
        {"Antonchik", 2, false, true},
        {"Borisik", 1, true, false},
        {"Vladik", 2, false, true},
        {"Diano", 3, true, false},
        {"Tolian", 2, false, true},
        {"Pashok", 1, true, false},
        {"Grisha", 2, false, true}
    };

    int countTotal = 0;
    int countNoStipendia = 0;

    // Підрахунок студентів 2-го курсу без стипендії
    for (int i = 0; i < 7; ++i) {
        if (students[i].course == 2) {
            countTotal++;
            if (!students[i].stipendia) {
                countNoStipendia++;
            }
        }
    }

    // Обчислення відсотка студентів 2-го курсу, що не мають стипендії
    float percent = (countTotal > 0) ? (static_cast<float>(countNoStipendia) / countTotal) * 100 : 0;

    // Виведення результату
    cout << "Вiдсоток студентiв 2-го курсу, що не мають стипендiї: " << percent << "%" << endl;
   
    // Виведення списку студентів які займаються музикою
    cout << "Студенти, що займаються музикою: ";
    for (int i = 0; i < 7; ++i) {
        if (students[i].music) {
            cout << students[i].name << " ";
        }
    }
    cout << endl;

    return 0;
}
