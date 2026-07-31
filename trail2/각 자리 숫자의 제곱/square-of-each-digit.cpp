#include <iostream>
using namespace std;

int sol(int n) {
    if (n < 10) return n * n;
    return sol(n / 10) + (n % 10) * (n % 10);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << sol(n);
    return 0;
}