#include <iostream>
using namespace std;

int gcd(int n, int m) {
    int min = n < m ? n : m;
    for (int i = min; i > 0; i--) {
        if (n % i == 0 && m % i == 0) return i;
    }
    return 1;
}

int lcm(int n, int m) {
    return n * m / gcd(n, m);
}

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    cout << lcm(n, m);
    return 0;
}