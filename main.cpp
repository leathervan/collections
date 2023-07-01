#include <iostream>
#include "Vector.h"
#include "LinkedList.h"

int main() {
    LinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.push_front(0);
    list.push_front(-1);
    list.push_back(6);
    list.push_front(-2);
    std::cout<< list << std::endl;
    list.pop_front();
    std::cout<< list << std::endl;
    list.insert(4,100);
    std::cout<< list << std::endl;
    list.pop_back();
    std::cout<< list << std::endl;
    list.pop_back();
    std::cout<< list << std::endl;
    list.insert(6, 18);
    std::cout<< list << std::endl;
    list.removeAt(6);
    std::cout<< list << std::endl;
    list.removeAt(4);
    std::cout<< list << std::endl;
    list.pop_front();
    std::cout<< list << std::endl;
    list.push_back(5);
    std::cout<< list << std::endl;
    return 0;
}
