#include <iostream>
using namespace std;

// An = An-1 * An-2 % 100
int sol(int n) {
    if (n == 1) return 2;
    if (n == 2) return 4;
    return sol(n - 1) * sol(n - 2) % 100;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << sol(n);
    return 0;
}