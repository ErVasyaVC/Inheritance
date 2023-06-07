#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

class Array{

public:
    static const int MAX_SIZE = 100;
    Array();
    Array(int size);

    unsigned char& operator[](int index);
    const unsigned char& operator[](int index) const;
protected:
    int count;
    unsigned char array[MAX_SIZE];
};

#endif  // ARRAY_H