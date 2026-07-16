#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 == 0) cout << i * n + j;
            else cout << i * n + n - j + 1;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}