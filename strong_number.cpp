#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int num, originalNum, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;
    while(num > 0) {
        digit = num % 10;            
        sum = sum + factorial(digit); 
        num = num / 10;               
    }
    if(sum == originalNum) {
        cout << originalNum << " is a Strong Number." << endl;
    } else {
        cout << originalNum << " is NOT a Strong Number." << endl;
    }

    return 0;
}                

