#include <iostream>
using namespace std;

int main() {
    int n = 5, i = 2;
    bool isSet = (n & (1 << i)) != 0;
    if(isSet)
        cout << "Set Bit";
    else
        cout << "Not Set";
    return 0;
}
