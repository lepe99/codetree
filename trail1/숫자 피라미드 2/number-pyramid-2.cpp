#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cnt++;
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}