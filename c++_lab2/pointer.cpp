#include <iostream>

using namespace std;

int main() {
    int number;
    int* numberPointer = &number;
    int& referenceNumber = number;
    const int tage = 22;

    number = 5;
    (*numberPointer)++;
    referenceNumber ++;

    cout << number << endl;

    int hex = 0xf3f2;
    cout << hex << endl;
    int oct = 0437;
    cout << oct << endl;
    int charac = 'a';
    cout << charac << endl;
}
