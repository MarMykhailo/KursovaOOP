#pragma once
#include <fstream>

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

    int getSize()  {
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


    void swap(int A, int B) {
        Node& tempA = at(A);
        Node& tempB = at(B);

        Node* tempNext = tempA.next;
        Node* tempPrev = tempA.prev;

        tempA.next = tempB.next;
        tempA.prev = tempB.prev;

        tempB.next = tempNext;
        tempB.prev = tempPrev;
    }

    void removeAt(int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }

        Node* nodeToRemove = &at(index);

        // Видаляємо елемент з двобічної черги
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

    friend std::ofstream& operator<<(std::ofstream& out, const Dlist<T>& list);

    friend std::ifstream& operator>>(std::ifstream& in, Dlist<T>& list);

};


template<typename T>
std::ofstream& operator<<(std::ofstream& out, const Dlist<T>& list)
{
    typename Dlist<T>::Node* current = list.head;
    while (current != nullptr) {
        out << current->data << std::endl;
        current = current->next;
    }
    return out;
}



template<typename T>
std::ifstream& operator>>(std::ifstream& in, Dlist<T>& list) {
    T value;
    while (in >> value) {
        list.push_back(value);
    }
    return in;
}


