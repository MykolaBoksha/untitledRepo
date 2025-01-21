#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

// Структура для однозв'язного списку
struct Node {
    char data;  // Дані
    Node* next; // Вказівник на наступний елемент
};

// Структура для двозв'язного списку
struct DoublyNode {
    char data;        // Дані
    DoublyNode* prev; // Вказівник на попередній елемент
    DoublyNode* next; // Вказівник на наступний елемент
};

// Функція для додавання елемента до початку однозв'язного списку
inline void addToStart(Node*& head, char value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Функція для додавання елемента до кінця двозв'язного списку
inline void addToEnd(DoublyNode*& head, DoublyNode*& tail, char value) {
    DoublyNode* newNode = new DoublyNode;
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = tail;

    if (tail) {
        tail->next = newNode;
    }
    else {
        head = newNode;
    }
    tail = newNode;
}

// Функція для друку однозв'язного списку
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Функція для друку двозв'язного списку
void printDoublyList(DoublyNode* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Функція для звільнення пам'яті однозв'язного списку
void freeList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Функція для звільнення пам'яті двозв'язного списку
void freeDoublyList(DoublyNode*& head) {
    while (head != nullptr) {
        DoublyNode* temp = head;
        head = head->next;
        delete temp;
    }
}

#endif