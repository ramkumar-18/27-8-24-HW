#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4};
    int n = arr.size();
    for (int i = 0; i < (1 << n); ++i) {
        cout << "{ ";
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                cout << arr[j] << " ";
            }
        }
        cout << "}" << endl;
    }
    return 0;
}
