#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0;
    int count = 0;

    string input_line;
    cin >> input_line;
    int max_length = input_line.length();

    
     while (i < max_length)
    {
        if (input_line[i] == '?')
            ++count;
        ++i;
    }
    cout << count;

    return 0;
}