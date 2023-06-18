#ifndef COLLECTIONS_VECTOR_H
#define COLLECTIONS_VECTOR_H

#include <stdexcept>
#include <ostream>

template <class T> class Vector {
private:
    int v_size;
    int v_capacity;
    double v_coefficient = 0.2;
    T *v_array;

public:
    Vector(int capacity = 5);

    virtual ~Vector();

    bool push(const T &item);

    bool pop();

    const int &size();

    const int &capacity();

    bool isEmpty();

    T at(int n);

    T &operator[](int n);

    void clear();

    T &back();

    T *begin();

    T *end();

    friend std::ostream &operator<<(std::ostream &out, const Vector &vector) {
        out << "Vector[";
        for (int i = 0; i < vector.v_size; ++i) {
            out << vector.v_array[i];
            if (i < vector.v_size - 1) {
                out << ", ";
            }
        }
        out << ']';
        return out;
    }

    void resize(const int &capacity);

private:
    void resize();

};


#endif
