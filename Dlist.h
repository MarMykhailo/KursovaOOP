#pragma once
#include <fstream>


template <typename T>
class Dlist {
private:
    struct Node {
        T data;
        Node* next;
        Node* prev;
        Node(const T& data, Node* next = nullptr, Node* prev = nullptr)
            : data(data), next(next), prev(prev) {}
    };


    int size;

public:
    Node* head;
    Node* tail;

    Dlist() : head(nullptr), tail(nullptr), size(0) {}

    int getSize() const {
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

    void Swap(T& A, T& B) {
        Node* tempNext = A.next;
        Node* tempPrev = A.prev;

        A.next = B.next;
        A.prev = B.prev;

        B.next = tempNext;
        B.prev = tempPrev;
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

    //void writeToFile(const std::string& filename) const {
    //    std::ofstream file(filename);
    //    if (file.is_open()) {
    //        Node* current = head;
    //        while (current != nullptr) {
    //            file << current->data << " ";
    //            current = current->next;
    //        }
    //        file.close();
    //    }
    //    else {
    //        throw std::runtime_error("Unable to open the file");
    //    }
    //}

    //void readFromFile(const std::string& filename) {
    //    clear();
    //    std::ifstream file(filename);
    //    if (file.is_open()) {
    //        T value;
    //        while (file >> value) {
    //            push_back(value);
    //        }
    //        file.close();
    //    }
    //    else {
    //        throw std::runtime_error("Unable to open the file");
    //    }
    //}


    friend std::ofstream& operator<<(std::ofstream& out, const Dlist<T>& list);

    friend std::ifstream& operator>>(std::ifstream& in, Dlist<T>& list);

        // Визначення оператора << для запису у файл
    //friend std::ofstream& operator<<(std::ofstream& out, const Dlist<T>& list) {
    //    typename Dlist<T>::Node* current = list.head;
    //    while (current != nullptr) {
    //        out << current->data << " ";
    //        current = current->next;
    //    }
    //    return out;
    //}

    //// Визначення оператора >> для зчитування з файлу
    //friend std::ifstream& operator>>(std::ifstream& in, Dlist<T>& list) {
    //    list.clear(); // Переконайтеся, що ви визначили функцію clear() для класу Dlist
    //    T value;
    //    while (in >> value) {
    //        list.push_back(value);
    //    }
    //    return in;
    //}

};



template<typename T>
std::ofstream& operator<<(std::ofstream& out, const Dlist<T>& list)
{
    typename Dlist<T>::Node* current = list.head;
    while (current != nullptr) {
        out << current->data << " ";
        current = current->next;
    }
    return out;
}

template<typename T>
std::ifstream& operator>>(std::ifstream& in, Dlist<T>& list) {
    list.clear(); // Ensure to define the clear function in your Dlist class
    T value;
    while (in >> value) {
        list.push_back(value);
    }
    return in;
}

