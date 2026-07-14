#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    bool f = 1;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            f = 0;
            break;
        }
    }
    cout << (f ? "YES" : "NO");
    return 0;
}