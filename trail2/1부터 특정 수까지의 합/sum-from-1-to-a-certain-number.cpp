#include <iostream>
using namespace std;

int sol(int n) {
    int sum{};
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum /= 10;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    cout << sol(n);
    return 0;
}