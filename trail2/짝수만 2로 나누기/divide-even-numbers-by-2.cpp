#include <iostream>
using namespace std;

void sol(int* a) {
    for(int i = 0; a[i]; i++) {
        if (a[i] % 2 == 0) a[i] /= 2;
    }
}

int main() {
    // Please write your code here.
    int n, a[51];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sol(a);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}