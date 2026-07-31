#include <iostream>
using namespace std;

int sol(int n) {
    if (n == 1 || n == 2) return 1;
    return sol(n - 1) + sol (n - 2);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << sol(n);
    return 0;
}