#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int numbers[5];
    int sum = 0;
    double mean;
    int median;

    for(int i=0; i<5; i++){
        cout << "Enter number "<< i + 1 << endl;
        cin >> numbers[i];
        sum += numbers[i];
    }
    
    mean = sum/5.0;
    cout << "The mean is " << mean << endl;
    
    //sorting the array to get the median
    sort(numbers, numbers + 5);
    //since the total number is odd
    median = numbers[2];
    cout << "The median is " << median <<endl;

    unordered_map<int, int> numberCount;
    for(int i=0; i<5; i++){
        numberCount[numbers[i]]++;
    }
    
    int maxCount = numberCount[numbers[0]];
    int mode = numbers[0];
    
    for (auto item : numberCount){
        if (maxCount < item.second){
            maxCount = item.second;
            mode = item.first;
        }
    }
    cout << "The mode is " << mode <<endl;

}