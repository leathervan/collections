#include "LinkedList.h"

template
class LinkedList<int>;

template<class T>
void LinkedList<T>::push_back(T data) {
    if (this->head == nullptr) head = new Node(data);
    else {
        Node *current = this->head;
        while (current->next != nullptr) current = current->next;
        current->next = new Node(data);
    }
    ++size;
}

template<class T>
void LinkedList<T>::push_front(T data) {
    if (this->head == nullptr) head = new Node(data);
    else {
        Node *newNode = new Node(data, this->head);
        this->head = newNode;
    }
    ++size;
}

template<class T>
void LinkedList<T>::pop_front() {
    if (this->head == nullptr) return;

    Node *temp = this->head;
    this->head = this->head->next;
    delete temp;
    --size;
}

template<class T>
void LinkedList<T>::pop_back() {
    Node *current = this->head;
    while (current->next->next != nullptr) current = current->next;
    delete current->next;
    current->next = nullptr;
    --size;
}

template<class T>
void LinkedList<T>::insert(int index, T data) {
    if (index < 0 || index >= size) throw std::out_of_range("Index out of range");
    if (index == 0) {
        Node *newNode = new Node(data, this->head);
        this->head = newNode;
    } else {
        int i = 0;
        Node *current = this->head;
        while (i + 1 != index) {
            current = current->next;
            ++i;
        }
        Node *newNode = new Node(data, current->next);
        current->next = newNode;
    }
    ++size;
}

template<class T>
void LinkedList<T>::removeAt(int index) {
    if (index < 0 || index >= size) throw std::out_of_range("Index out of range");
    if (index == 0) pop_front();
    else {
        int i = 0;
        Node *current = this->head;
        while (i + 1 != index) {
            current = current->next;
            ++i;
        }
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
    }
    --size;
}

template<class T>
T &LinkedList<T>::operator[](const int n) {
    if (n < 0 || n >= size) throw std::out_of_range("Index out of range");

    int index = 0;
    Node *current = this->head;
    while (index != n) {
        current = current->next;
        ++index;
    }

    return current->data;
}

template<class T>
int LinkedList<T>::getSize() const {
    return size;
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return size == 0;
}

template<class T>
void LinkedList<T>::clear() {
    while (head != nullptr) pop_front();
}
