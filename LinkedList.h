#ifndef COLLECTIONS_LINKEDLIST_H
#define COLLECTIONS_LINKEDLIST_H


#include <ostream>

template <class T> class LinkedList {
private:
    struct Node{
        T data;
        Node* next;

        Node(T data, Node* next = nullptr) : data(data), next(next){}
    };
    Node* head;
    int size;
public:
    LinkedList() {
        head = nullptr;
        size = 0;
    }
    ~LinkedList(){
        while (head != nullptr) pop_front();
    }

    void push_back(T data);
    void push_front(T data);

    void pop_front();
    void pop_back();

    void insert(int index, T data);
    void removeAt(int index);

    int getSize() const;
    bool isEmpty();
    void clear();

    T& operator[](const int n);

    friend std::ostream &operator<<(std::ostream &out, const LinkedList &list) {
        out << "LinkedList[";
        Node* current = list.head;
        while (current != nullptr){
            out << current->data;
            if(current->next != nullptr) out << ", ";
            current = current->next;
        }
        out << ']';
        return out;
    }
};


#endif

