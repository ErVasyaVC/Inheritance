#include "Array.h"
#include <stdexcept>

Array::Array(){
    count = 0;
}


Array::Array(int size) {
    if (size > MAX_SIZE) {
        size = MAX_SIZE;
    }
    count = size;
    for(int i = 0; i < count; ++i){
        array[i] = '0';
    }
}

unsigned char& Array::operator[](int index) {
    if (index >= 0 && index < count) {
        return array[index];
    } else {
        throw std::out_of_range("Array index out of bounds");
    }
}

const unsigned char& Array::operator[](int index) const {
    if (index >= 0 && index < count) {
        return array[index];
    } else {
        throw std::out_of_range("Array index out of bounds");
    }
}