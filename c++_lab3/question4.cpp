#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    string reversed_output = "";
    cout << "Enter a line of text" << endl;
    getline(cin, text, '\n');
    int length = text.length();

    for(int i=length-1; i>=0; --i){
        reversed_output += text[i];
    }

    cout << reversed_output << endl;

}