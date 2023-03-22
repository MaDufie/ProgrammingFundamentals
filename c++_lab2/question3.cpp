#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void printWord(string sentence){
    string word;
    stringstream sentence_stream(sentence);
    while(getline(sentence_stream, word, '-')){
        cout << word.length() << " " << word << endl;
    }

}


int main() {
   cout << "Enter sence separated with hyphen";
   string sentence;
   cin >> sentence;

   printWord(sentence);

}