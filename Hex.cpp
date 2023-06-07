#include "Hex.h"

Hex::Hex(int size): Array(size){}
Hex::Hex(): Array(){}

Hex& Hex::operator=(const Hex& other) {
    if (this == &other) {
        return *this;
    }

    for (int i = 0; i < other.count; i++) {
        (*this)[i] = other[i];
    }
    count = other.count;
    return *this;
}

Hex& Hex::operator=(char* other) {
    count = strlen(other);
    for (int i = 0; i < count; i++) {
        (*this)[i] = other[i];
    }
    return *this;
}

int Hex::getDigit() const{
    int sum = 0;
    for(int i = 0; i < count; ++i){
        char c = (*this)[i];
        if (isdigit(c)) {
            sum += (c - '0')* pow(16,count-i-1);
        } else if (isxdigit(c)) {
            sum += toupper(c) - 'A' + 10 * pow(16,count-i-1);
        } else {
            throw std::invalid_argument("Invalid hex input");
        }
    }
    return sum;
}


Hex Hex::operator+(const Hex& other) const {

    int sum = getDigit() + other.getDigit();
    int sum2 = sum;
    int c = 0;
    while (sum2 > 0) {
        sum2 = sum2 / 16;
        ++c;
    }
    Hex result(c);
    char writing[17] = "0123456789ABCDEF";
    for (int i = 0; i < count; ++i) {
        result[i] = writing[sum % 16];
        sum = sum/16;
    }

    return result;
}

bool Hex::operator!=(const Hex& other) const {
    return !(*this == other);
}
bool Hex::operator==(const Hex& other) const {
    if (count != other.count) {
        return false;
    }

    for (int i = 0; i < count; i++) {
        if ((*this)[i] != other[i]) {
            return false;
        }
    }

    return true;
}

bool Hex::operator>(const Hex& other) const {
    if (getDigit() > other.getDigit()) {
        return true;
    }
    return false;
}

bool Hex::operator>=(const Hex& other) const {
    if (getDigit() >= other.getDigit()) {
        return true;
    }
    return false;
}

bool Hex::operator<=(const Hex& other) const {
    if (getDigit() <= other.getDigit()) {
        return true;
    }
    return false;
}

bool Hex::operator<(const Hex& other) const {
    if (getDigit() < other.getDigit()) {
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& os, const Hex& hex) {
    for (int i = hex.count - 1; i >= 0; i--) {
        os << hex[i];
    }
    return os;
}