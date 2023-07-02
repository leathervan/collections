#include "Sort.h"

template
class Sort<int>;

template<class T>
void Sort<T>::bubbleSort(T *arr, int size) {
    T min = arr[0];
    bool swap = true;
    while (swap) {
        swap = false;
        for (int j = 0; j < size - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swap = true;
            }
        }
    }
}

template<class T>
void Sort<T>::selectionSort(T *arr, int size) {
    int index = 0, min;
    for (int i = 0; i < size; ++i) {
        min = index;
        for (int j = index; j < size; ++j) {
            if (arr[min] > arr[j]) min = j;
        }
        std::swap(arr[index], arr[min]);
        ++index;
    }
}

template<class T>
void Sort<T>::quickSort(T *arr, int size) {
    quickSort(arr, arr + size - 1);
}

template<class T>
void Sort<T>::quickSort(T *first, T *last) {
    T pivot = *(first + (last - first) / 2);
    T *left = first, *right = last;
    while (left <= right) {
        while (*left < pivot) ++left;
        while (*right > pivot) --right;
        if (left <= right) {
            std::swap(*left, *right);
            ++left;
            --right;
        }
    }
    if (first < right) quickSort(first, right);
    if (left < last) quickSort(left, last);
}