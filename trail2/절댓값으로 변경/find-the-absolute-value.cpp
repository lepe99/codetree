#include <iostream>
using namespace std;

int a[51], n;

void abs(int* a) {
    for (int i = 0; i < n; i++) {
        a[i] = a[i] < 0 ? a[i] * -1 : a[i];
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    abs(a);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}