#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

// ��������� ��� ������'������ ������
struct Node {
    char data;  // ���
    Node* next; // �������� �� ��������� �������
};

// ��������� ��� �����'������ ������
struct DoublyNode {
    char data;        // ���
    DoublyNode* prev; // �������� �� ��������� �������
    DoublyNode* next; // �������� �� ��������� �������
};

// ������� ��� ��������� �������� �� ������� ������'������ ������
inline void addToStart(Node*& head, char value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// ������� ��� ��������� �������� �� ���� �����'������ ������
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

// ������� ��� ����� ������'������ ������
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// ������� ��� ����� �����'������ ������
void printDoublyList(DoublyNode* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// ������� ��� ��������� ���'�� ������'������ ������
void freeList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// ������� ��� ��������� ���'�� �����'������ ������
void freeDoublyList(DoublyNode*& head) {
    while (head != nullptr) {
        DoublyNode* temp = head;
        head = head->next;
        delete temp;
    }
}

#endif