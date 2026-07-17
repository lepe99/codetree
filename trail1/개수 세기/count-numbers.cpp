#include <iostream>
using namespace std;

int main() {
    int n, m, cnt{};
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == m) ++cnt;
    }
    cout << cnt;
    return 0;
}