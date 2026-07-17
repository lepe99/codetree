#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m = 0, a[100], ptr = 0, cnt = 0;
    cin >> n;
    while (true) {
        m += n;
        a[ptr++] = m;
        if (m % 5 == 0) {
            if (++cnt == 2) break;
        }
    }
    for (int i = 0; i < ptr; i++) {
        cout << a[i] << " ";
    }
    return 0;
}