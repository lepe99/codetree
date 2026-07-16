#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[100], pt;
    for (int i = 0; i < 100; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            pt = i;
            break;
        }
    }
    int sum = 0;
    for (int i = pt - 3; i < pt; i++) {
        sum += a[i];
    }
    cout << sum;
    return 0;
}