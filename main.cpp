#include <iostream>
#include "Hex.h"
using namespace std;

int main() {
    Hex hex1(5);
    Hex hex2(5);
    Hex hex3(5);
    Hex hex4(5);
    Hex hex5(5);

    hex1 = "12D";
    hex2 = "1AD";
    hex3 = hex1;
    hex4 = hex1 + hex2;

    cout << hex4 << endl;
    if (hex1 == hex2) {
        cout << "hex1 равно hex2" << endl;
    } else {
        cout << "hex1 не равно hex2" << endl;
    }

    if (hex1 == hex3) {
        cout << "hex1 равно hex3" << endl;
    } else {
        cout << "hex1 не равно hex3" << endl;
    }
    if (hex1 != hex2) {
        cout << "hex1 не равно hex2" << endl;
    } else {
        cout << "hex1 равно hex2" << endl;
    }

    if (hex1 > hex2) {
        cout << "hex1 больше hex2" << endl;
    } else {
        cout << "hex1 не больше hex2" << endl;
    }
    if (hex1 < hex2) {
        cout << "hex1 меньше hex2" << endl;
    } else {
        cout << "hex1 не меньше hex2" << endl;
    }


    if (hex1 >= hex3) {
        cout << "hex1 больше или равно hex3" << endl;
    } else {
        cout << "hex1 не больше и не равно hex3" << endl;
    }
    if (hex1 <= hex2) {
        cout << "hex1 меньше или равно hex2" << endl;
    } else {
        cout << "hex1 не меньше и не равно hex2" << endl;
    }

}