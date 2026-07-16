#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10], pt;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        if (a[i] == 0) break;
        pt = i;
    }
    int sum = 0;
    for (int i = pt; i >= 0; i--) {
        sum += a[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double) sum / (pt + 1);
    return 0;
}