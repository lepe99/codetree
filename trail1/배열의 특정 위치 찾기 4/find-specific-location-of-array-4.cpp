#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10], pt;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        if (a[i] == 0) break;
        pt = i;
    }
    int sum = 0, cnt = 0;
    for (int i = pt; i >= 0; i--) {
        if (a[i] % 2 == 0) {
            sum += a[i];
            cnt++;
        }
    }
    cout << cnt << " " << sum;
    return 0;
}