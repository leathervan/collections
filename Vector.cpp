#include "Vector.h"

template<class T>
Vector<T>::Vector(int capacity):v_capacity(capacity) {
    v_array = new T[v_capacity];
    v_size = 0;
}

template<class T>
Vector<T>::~Vector() {
    delete[] v_array;
}

template<class T>
bool Vector<T>::push(const T &item) {
    if (v_size >= v_capacity) resize();

    v_array[v_size] = item;
    ++v_size;

    return true;
}

template<class T>
bool Vector<T>::pop() {
    if (v_size <= 0) return false;
    v_array[v_size] = 0;
    --v_size;

    if ((v_size + int(v_size * v_coefficient)) < v_capacity) resize(v_size);
    return true;
}

template<class T>
const int &Vector<T>::size() {
    return v_size;
}

template<class T>
const int &Vector<T>::capacity() {
    return v_capacity;
}

template<class T>
bool Vector<T>::isEmpty() {
    return v_size == 0;
}

template<class T>
T Vector<T>::at(int n) {
    if (n < 0 || n >= v_size) throw std::out_of_range("Index out of range");

    return v_array[n];
}

template<class T>
T &Vector<T>::operator[](int n) {
    if (n < 0 || n >= v_size) throw std::out_of_range("Index out of range");

    return v_array[n];
}

template<class T>
void Vector<T>::resize(const int &capacity) {
    T *buf = new T[capacity];
    for (int i = 0; i < capacity; ++i) {
        buf[i] = v_array[i];
    }
    delete[] v_array;
    v_size = capacity;
    v_capacity = capacity;
    v_array = buf;
}

template<class T>
void Vector<T>::resize() {
    if (int(v_capacity * v_coefficient) < 1) ++v_capacity;
    else v_capacity += v_capacity * v_coefficient;
    T *buf = new T[v_capacity];
    for (int i = 0; i < v_size; ++i) {
        buf[i] = v_array[i];
    }
    delete[] v_array;
    v_array = buf;
}


template<class T>
void Vector<T>::clear() {
    v_size = 0;
    v_capacity = 0;
    delete[] v_array;
    v_array = new T;
}

template<class T>
T &Vector<T>::back() {
    if (v_size > 0) return v_array[v_size - 1];

    throw std::out_of_range("Vector is empty");
}

template<class T>
T *Vector<T>::begin() {
    return v_array;
}

template<class T>
T *Vector<T>::end() {
    return v_array + v_size;
}

template
class Vector<int>;

template
class Vector<double>;