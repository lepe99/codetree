#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b;
    cout << a << " " << b << " ";
    for (int i = 0; i < 8; i++) {
        c = (a + b) % 10;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}