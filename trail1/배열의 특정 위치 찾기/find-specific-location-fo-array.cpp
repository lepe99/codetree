#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10], n;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    int sum = 0, sumA = 0;
    double avg = 0;
    for (int i = 1; i < 10; i += 2) {
        sum += a[i];
    }
    for (int i = 2; i < 10; i += 3) {
        sumA += a[i];
    }
    avg = (double) sumA / 3;
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}