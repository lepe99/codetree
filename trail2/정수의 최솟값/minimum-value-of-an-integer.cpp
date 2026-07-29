#include <iostream>
using namespace std;

int sol(int a, int b, int c) {
    int min = a < b ? a : b;
    if (min == a) min = a < c ? a : c;
    else min = b < c ? b : c;
    return min;
}

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    cout << sol(a, b, c);
    return 0;
}