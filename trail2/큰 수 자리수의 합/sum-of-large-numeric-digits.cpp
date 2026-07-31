#include <iostream>
using namespace std;

int sol(int n) {
    if (n < 10) return n;
    return sol(n / 10) + n % 10;
}

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    cout << sol(a * b * c);
    return 0;
}