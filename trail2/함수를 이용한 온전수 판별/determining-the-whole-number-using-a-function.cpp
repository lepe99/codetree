#include <iostream>
using namespace std;

bool sol(int n) {
    if (n % 2 == 0) return 0;
    if (n % 10 == 5) return 0;
    if (n % 3 == 0 && n % 9 != 0) return 0;
    return 1;
}

int main() {
    // Please write your code here.
    int a, b, cnt{};
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (sol(i)) cnt++;
    }
    cout << cnt;
    return 0;
}