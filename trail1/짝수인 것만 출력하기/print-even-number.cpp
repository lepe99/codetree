#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, pt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m % 2 == 0) a[pt++] = m;
    }
    for (int i = 0; i < pt; i++) {
        cout << a[i] << " ";
    }
    return 0;
}