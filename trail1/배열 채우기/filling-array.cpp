#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10], pt;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        if (a[i] == 0) break;
        pt = i;
    }

    for (int i = pt; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}