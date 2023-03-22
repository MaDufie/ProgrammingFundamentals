#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    char num_operator;
    int results ;
    cout<<"Please enter operand 1 and operand 2" << endl;
    cin >> number1 >> number2;
    cout << "Enter an operator" << endl;
    cin >> num_operator ;

    switch (num_operator){

        case '+':
            results = number1 + number2;
            cout << results << endl;
            break;

        case '-':
            results = number1 - number2;
            cout << results << endl;
            break;
        
        case '*':
            results = number1 * number2;
            cout << results << endl;
            break;
        
        case '/':
            results = number1 / number2;
            cout << results << endl;
            break;


        default:
        cout << "This is an invalid operator"<<endl;
                
        

        


    }

    return 0;
    
}