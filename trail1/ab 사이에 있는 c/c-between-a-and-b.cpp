#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    bool t = 0;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            t = 1;
            break;
        }
    }
    cout << (t ? "YES" : "NO");
    return 0;
}