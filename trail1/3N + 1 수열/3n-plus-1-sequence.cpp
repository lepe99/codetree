#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0;
    cin >> n;
    while (true) {
        if (n == 1) {
            cout << cnt;
            break;
        }
        if (n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
        cnt++;

    }
    return 0;
}