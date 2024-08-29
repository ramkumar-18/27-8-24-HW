#include <iostream>
using namespace std;

int main() {
    int n = 29;
    int cnt = 0;
    while (n) {
        cnt += n & 1;
        n >>= 1;
    }
    cout << cnt;
    return 0;
}
