#include <iostream>
using namespace std;
int main() {
    char u;
    cin >> u;
    char l = u | 32;
    cout << l;

    char c = 'a';
    char t = c ^ 32;
    cout << t;

    return 0;
}
