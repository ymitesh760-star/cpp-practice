#include <iostream>
using namespace std;

class Compare {
public:
    int value;
    Compare(int val) : value(val) {}
    bool operator>(const Compare& other) const {
        return value > other.value;
    }
};

int main () {
    Compare a(15),b(10);
    if (a > b)
    cout << "a is greater " << endl;
    else 
    cout << "b is greater " << endl;
    return 0;

} 
     