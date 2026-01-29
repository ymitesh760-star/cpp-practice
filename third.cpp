#include <iostream>
using namespace std;
//program determines the greater of two users input numbers
int main() {
    int a,b;
    cout << "Enter First Number:";
    cin >> a;

    cout << "Enter Second Number:";
    cin >> b;

    int max = (a>b)?a:b;
    cout << "Greater Number is: " << max ; 
}