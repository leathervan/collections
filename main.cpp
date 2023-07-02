#include <iostream>
#include "Vector.h"
#include "LinkedList.h"
#include "Sort.h"

int main() {
    Sort<int> sort;
    int arr[10] = {9, 2, 5, 3, 7, 1, 6, 10, 4, 8};
    sort.bubbleSort(arr, 10);
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std:: cout << std::endl;

    int arr1[10] = {9, 2, 5, 3, 7, 1, 6, 10, 4, 8};
    sort.selectionSort(arr1, 10);
    for (int i = 0; i < 10; ++i) {
        std::cout << arr1[i] << " ";
    }
    std:: cout << std::endl;

    int arr2[10] = {9, 2, 5, 3, 7, 1, 6, 10, 4, 8};
    sort.quickSort(arr2, 10);
    for (int i = 0; i < 10; ++i) {
        std::cout << arr2[i] << " ";
    }
    std:: cout << std::endl;
    return 0;
}
