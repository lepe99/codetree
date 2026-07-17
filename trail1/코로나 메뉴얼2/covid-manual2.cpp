#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[4]{}, n;
    char c;
    for (int i = 0; i < 3; i++) {
        cin >> c >> n;
        if (c == 'Y') {
            if (n >= 37) ++a[0];
            else ++a[2];
        } else {
            if (n >= 37) ++a[1];
            else ++a[3];
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
    if (a[0] >= 2) cout << 'E';

    return 0;
}