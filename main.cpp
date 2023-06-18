#include <iostream>
#include "Vector.h"

int main() {

    Vector<double> vector;
    std::cout << vector << std::endl;
    std::cout << "is empty: " << vector.isEmpty() << "   size: " << vector.size() << "   capacity: " << vector.capacity() << std::endl;

    for (int i = 0; i < 50; ++i) {
        vector.push(i/2.0);
    }
    std::cout << vector << std::endl;
    std::cout << "is empty: " << vector.isEmpty() << "   size: " << vector.size() << "   capacity: " << vector.capacity() << std::endl;

    vector.pop();

    std::cout << vector << std::endl;
    std::cout << "is empty: " << vector.isEmpty() << "   size: " << vector.size() << "   capacity: " << vector.capacity() << std::endl;

    std::cout << vector.back() << std::endl;

    vector.resize(25);

    std::cout << vector << std::endl;
    std::cout << "is empty: " << vector.isEmpty() << "   size: " << vector.size() << "   capacity: " << vector.capacity() << std::endl;

    vector.clear();

    std::cout << vector << std::endl;
    std::cout << "is empty: " << vector.isEmpty() << "   size: " << vector.size() << "   capacity: " << vector.capacity() << std::endl;

    for (int i = 0; i < 10; ++i) {
        vector.push(i/2.0);
    }

    std::cout << vector << std::endl;
    std::cout << "is empty: " << vector.isEmpty() << "   size: " << vector.size() << "   capacity: " << vector.capacity() << std::endl;

    for (double * it = vector.begin(); it != vector.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
