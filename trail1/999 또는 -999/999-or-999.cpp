#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int max = -1000, min = 1000;
    while (true) {
        int n;
        cin >> n;
        if (n == 999 || n == -999) break;
        max = max > n ? max : n;
        min = min > n ? n : min;
    }
    cout << max << " " << min;
    return 0;
}