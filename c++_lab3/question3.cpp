#include <iostream>
using namespace std;

int main(){
    char c;
while (std::cin.get(c))
  std::cout.put(c);

}

// cin.get() Extracts a single character from the stream as unformatted input(ie including spaces)
//  cin.put() inserts character into the output stream