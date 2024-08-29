#include <iostream>
using namespace std;

int main() {
    int n = 5, i = 0;
    n = n & ~(1 << i);
    cout << n ;
}
