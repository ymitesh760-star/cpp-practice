#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int add(int a, int b) 
{
    return a + b; 
}
void greet()
{
    cout << "Hello, World!" << endl;
}
bool isEven(int num)
{
    return num % 2 == 0;
}
void callByValue(int x)
{
    x = 100; 
    cout << "Inside callByValue function: " << x << endl;
}
void callByReference(int &b)
{
    b = 200; 
    cout << "Inside callByReference function: " << b << endl;
}
void callByPointer(int *p)
{
    *p = 300; 
    cout << "Inside callByPointer function: " << *p << endl;
}
int main() {

    cout << "--- Function Return Types ---" << endl;
    greet();
    cout << "Sum: " << add(5, 7) << endl;
    cout << "Is 4 even? " << (isEven(4) ? "Yes" : "No") << endl;
    cout << endl;
    cout << "--- Parameter Passing Mechanics ---" << endl;
    int num = 10;
    cout << "Original Value: " << num << endl << endl;
    callByValue(num);
    cout << "Value in main after callByValue: " << num << " (No Change)" << endl << endl;
    callByReference(num);
    cout << "Value in main after callByReference: " << num << " (Changed)" << endl << endl;
    callByPointer(&num); 
    cout << "Value in main after callByPointer: " << num << " (Changed again)" << endl;
    return 0;
}