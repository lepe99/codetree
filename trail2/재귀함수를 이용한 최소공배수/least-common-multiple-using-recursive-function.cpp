#include <iostream>
using namespace std;
// a = bq + r
// gcd(a,b)=gcd(b,r)
int gcd(int a, int b) {
    // if (b == 0) return a;
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int a[11], n;

int sol(int n) {
    if (n == 0) return 1;
    return lcm(a[n - 1], sol(n - 1));
}
int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << sol(n) << endl;
    return 0;
}