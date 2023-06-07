#ifndef HEX_H
#define HEX_H

#include "Array.h"
#include <iostream>
#include <cmath>



class Hex : public Array {
public:
    Hex(int size);
    Hex();

    Hex& operator=(const Hex& other);
    Hex& operator=(char* other);

    Hex operator+(const Hex& other) const;

    bool operator==(const Hex& other) const;
    bool operator!=(const Hex& other) const;
    bool operator<(const Hex& other) const;
    bool operator<=(const Hex& other) const;
    bool operator>(const Hex& other) const;
    bool operator>=(const Hex& other) const;

    int getDigit() const;

    friend std::ostream& operator<<(std::ostream& os, const Hex& hex);
};

#endif  // HEX_H
