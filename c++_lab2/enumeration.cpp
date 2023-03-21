#include <iostream>
#include <string>

using namespace std;

int main(){
    enum{RED, YELLOW, AMBER = YELLOW, GREEN};
    cout << RED << YELLOW << AMBER << GREEN;
}
