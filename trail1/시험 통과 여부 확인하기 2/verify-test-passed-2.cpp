#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0, a[4];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[j];
        }
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += a[j];
        }
        if (sum / 4 >= 60) {
            cnt++;
            cout << "pass";
        } else cout << "fail";
        cout << endl;
    }
    cout << cnt;

    return 0;
}