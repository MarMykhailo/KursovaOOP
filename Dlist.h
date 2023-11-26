#pragma once
#include <fstream>
//#include "Song.h"


template <typename T>
class Dlist {
private:
    struct Node {
        T data;
        Node* next = nullptr;
        Node* prev = nullptr;

        Node(const T& data, Node* next = nullptr, Node* prev = nullptr)
            : data(data), next(next), prev(prev) {}
    };


    int size;
public:
    Node* head;
    Node* tail;

    Dlist() : head(nullptr), tail(nullptr), size(0) {}

    int getSize() {
        return size;
    }

    void push_back(const T& value) {
        Node* new_node = new Node(value, nullptr, tail);
        if (tail) {
            tail->next = new_node;
        }
        else {
            head = new_node;
        }
        tail = new_node;
        size++;
        tail->next = nullptr;
    };

    void push_front(const T& value) {
        Node* new_node = new Node(value, head, nullptr);
        if (head) {
            head->prev = new_node;
        }
        else {
            tail = new_node;
        }
        head = new_node;
        size++;
        if (tail == nullptr) {
            tail = head; // Якщо список був порожній, tail тепер вказує на новий елемент
        }
        head->prev = nullptr;
    }

    T& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->data;
    }

    const T& operator[](int index) const {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->data;
    }

    Node& at(int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }
        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return *current;
    }

    int find(const T& value) const {
        Node* current = head;
        int index = 0;
        while (current != nullptr) {
            if (current->data == value) {
                return index;
            }
            current = current->next;
            index++;
        }
        return -1; // елемент не знайдено
    }

    void swap(int A, int B)
    {
        if (!head || !tail || A < 0 || B < 0 || A >= size || B >= size || A == B) {
            return;
        }

        Node* nodeA = &at(A);
        Node* nodeB = &at(B);
        if (nodeA->next == nodeB || nodeA->prev == nodeB)//елементи є судсідніми
        {
            if (nodeA->prev)
            {
                nodeA->prev->next = nodeB;//якщо A<B то A->prev->next = B
            }
            if (nodeB->next)
            {
                nodeB->next->prev = nodeA;//якщо A<B то B->next->prev = A
            }

            nodeA->next = nodeB->next;//якщо A<B то A->next = B->next

            nodeB->prev = nodeA->prev;//якщо A<B то B->prev = A->prev

            nodeA->prev = nodeB;//якщо A<B то A->prev = B

            nodeB->next = nodeA;//якщо A<B то B->next = A
        }
        else//елементи є не сусідінми
        {
            Node* tempNodeAPrev = nodeA->prev;
            Node* tempNodeANext = nodeA->next;

            Node* tempNodeBPrev = nodeB->prev;
            Node* tempNodeBNext = nodeB->next;


            //приєднання елементів збоку сусідніх елементів
            if (nodeB->prev)
            {
                nodeB->prev->next = nodeA;
            }
            if (nodeB->next)
            {
                nodeB->next->prev = nodeA;
            }
            if (nodeA->prev)
            {
                nodeA->prev->next = nodeB;
            }
            if (nodeA->next)
            {
                nodeA->next->prev = nodeB;
            }

            //приєднанян самих елементів до совїх місць
            //if (nodeA->prev)
            {
                nodeA->prev = tempNodeBPrev;
            }
            //if (nodeA->next)
            {
                nodeA->next = tempNodeBNext;
            }
            //if (nodeB->prev)
            {
                nodeB->prev = tempNodeAPrev;
            }
            //if (nodeB->next)
            {
                nodeB->next = tempNodeANext;
            }


        }
        //оновлення head і tail
        if (nodeA->prev == nullptr) {
            head = nodeA;
        }
        if (nodeB->prev == nullptr) {
            head = nodeB;
        }
        if (nodeA->next == nullptr) {
            tail = nodeA;
        }
        if (nodeB->next == nullptr) {
            tail = nodeB;
        }
    }



    Node* begin() const {
        return head;
    }

    // Метод для отримання ітератора на кінець списку
    Node* end() const {
        return nullptr;  // Для простоти припустимо, що кінець завжди nullptr
    }

    void removeAt(int index) {
        if (head == nullptr || tail == nullptr) {
            throw std::out_of_range("List is empty");
        }

        Node* nodeToRemove = &at(index);

        if (nodeToRemove->prev) {
            nodeToRemove->prev->next = nodeToRemove->next;
        }
        else {
            head = nodeToRemove->next;
        }

        if (nodeToRemove->next) {
            nodeToRemove->next->prev = nodeToRemove->prev;
        }
        else {
            tail = nodeToRemove->prev;
        }

        delete nodeToRemove;
        size--;
    }


    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    Dlist& operator+=(const Dlist& other) {
        Node* current = other.head;
        while (current != nullptr) {
            push_back(current->data);
            current = current->next;
        }
        return *this;
    }


    // Оператор виведення для Dlist
    friend std::ofstream& operator<<(std::ofstream& out, const Dlist<T>& list);

    // Оператор введення для Dlist
    friend std::ifstream& operator>>(std::ifstream& in, Dlist<T>& list);

};

template <typename T>
std::ofstream& operator<<(std::ofstream& out, const Dlist<T>& list) {
    typename Dlist<T>::Node* current = list.head;
    while (current != nullptr) {
        out << current->data << std::endl;  // Викликає оператор виведення для типу T
        current = current->next;
    }
    return out;
}

template <typename T>
std::ifstream& operator>>(std::ifstream& in, Dlist<T>& list) {
    T value;
    while (in >> value) {
        list.push_back(value);
    }
    return in;
}