#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int max = 0;
    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        max = max > n ? max : n;
    }
    cout << max;
    return 0;
}