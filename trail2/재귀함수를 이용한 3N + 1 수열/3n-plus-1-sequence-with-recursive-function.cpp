#include <iostream>
using namespace std;

int sol(int n) {
    if (n == 1) return 0;
    if (n % 2 == 0) return sol(n / 2) + 1;
    else return sol(n * 3 + 1) + 1;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << sol(n);
    return 0;
}