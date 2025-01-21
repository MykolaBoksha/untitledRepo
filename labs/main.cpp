#include "list.h"

int main() {
    setlocale(0,""); // Підтримка кирилиці

    // Створення першого списку (однозв'язного)
    Node* list1 = nullptr;

    // Формуємо перший список (6 елементів)
    addToStart(list1, 'F');
    addToStart(list1, 'E');
    addToStart(list1, 'D');
    addToStart(list1, 'C');
    addToStart(list1, 'B');
    addToStart(list1, 'A');

    // Виводимо перший список
    cout << "Перший список (однозв'язний): ";
    printList(list1);

    // Створення другого списку (двозв'язного)
    DoublyNode* list2Head = nullptr;
    DoublyNode* list2Tail = nullptr;

    // Перетворення однозв'язного списку у двозв'язний
    Node* temp = list1; // Для ітерації по першому списку
    while (temp != nullptr) {
        addToEnd(list2Head, list2Tail, temp->data); // Додаємо до двозв'язного списку
        temp = temp->next;                         // Переходимо до наступного елемента
    }

    // Виводимо другий список
    cout << "Другий список (двозв'язний): ";
    printDoublyList(list2Head);

    // Звільняємо пам'ять
    freeList(list1);
    freeDoublyList(list2Head);

    return 0;
}
