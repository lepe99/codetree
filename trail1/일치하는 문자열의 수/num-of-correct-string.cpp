#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt{};
    char a[101], b[101];
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        cin >> b;
        int j{};
        while (b[j] && a[j] == b[j]) j++;
        if (!b[j] && !a[j]) cnt++;
    }
    cout << cnt;
    return 0;
}