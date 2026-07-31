#include <iostream>
using namespace std;

int sol(int n) {
    if (n == 1 || n == 2) return n;
    return sol(n / 3) + sol(n - 1);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << sol(n);
    return 0;
}