#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cnt++;
            if (cnt == 10) cnt = 1;
            cout << cnt;
        }
        cout << endl;
    }
    return 0;
}