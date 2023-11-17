#include "Dlist.h"
#include "Song.h"

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


std::ofstream& operator<<(std::ofstream& out, const Dlist<Song>& list)
{
    out.fill('$');
    typename Dlist<Song>::Node* current = list.head;
    while (current != nullptr) {
        out << current->data; 
        if (current->next != nullptr)
        {
            out << std::endl;
        }
        current = current->next;
       
    }
    return out;
}

std::ifstream& operator>>(std::ifstream& in, Dlist<Song>& list) {
    in.fill('$');

    Song value;
    while (in.peek() != EOF) {
        in >> value;
        list.push_back(value);
    }
    return in;
}
