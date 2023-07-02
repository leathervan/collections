#ifndef COLLECTIONS_SORT_H
#define COLLECTIONS_SORT_H

#include <algorithm>

template <class T> class Sort {
public:
    static void bubbleSort(T* arr, int size);
    static void selectionSort(T* arr, int size);
    static void quickSort(T* arr, int size);

private:
    static void quickSort(T* first, T* last);
};


#endif
