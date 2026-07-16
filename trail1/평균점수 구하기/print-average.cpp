#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double a[8];
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }

    double sum = 0;
    for (int i = 0; i < 8; i++) {
        sum += a[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum / 8;
    return 0;
}