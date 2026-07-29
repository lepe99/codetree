#include <iostream>
using namespace std;

bool check(int n) {
    while (n > 0) {
        if (n % 10 % 3 == 0 && n % 10 != 0) return true;
        n /= 10;
    }
    return false;
}

int main() {
    int n, m, cnt{};
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        if (check(i) || i % 3 == 0) cnt++;
    }
    cout << cnt;
    return 0;
}