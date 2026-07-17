#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[100];
    cin >> a[1];
    a[0] = 1;
    int ptr = 2;
    printf("%d %d ", a[0], a[1]);
    while (true) {
        a[ptr] = a[ptr - 2] + a[ptr - 1];
        cout << a[ptr] << " ";
        if (a[ptr] > 100) break;
        ++ptr;
    }
    return 0;
}