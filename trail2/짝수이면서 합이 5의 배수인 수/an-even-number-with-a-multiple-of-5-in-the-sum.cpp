#include <iostream>
using namespace std;

bool sol(int n) {
    return n % 2 == 0 && (n / 10 + n % 10) % 5 == 0;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << (sol(n) ? "Yes" : "No");
    return 0;
}