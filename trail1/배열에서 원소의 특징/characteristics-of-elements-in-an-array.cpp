#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, pt, a[10];
    for (int i = 0; i < 10; i++) {
        cin >> n;
        a[i] = n;
        if (n % 3 == 0) {
            pt = i;
            break;
        }
    }
    cout << a[pt - 1];
    return 0;
}