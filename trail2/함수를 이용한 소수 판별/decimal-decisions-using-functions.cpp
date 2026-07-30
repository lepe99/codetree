#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    // Please write your code here.
    int a, b, sum{};
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) sum += i;
    }
    cout << sum;
    return 0;
}