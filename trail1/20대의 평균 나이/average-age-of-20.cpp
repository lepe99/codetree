#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0, sum = 0;
    while (true) {
        cin >> n;
        if (n >= 30 || n <= 10) break;
        sum += n;
        cnt++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double) sum / cnt;
    return 0;
}