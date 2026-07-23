#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m, cnt = 0;
    cin >> n >> m;

    int arr[9][9] {};
    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        arr[r - 1][c - 1] = ++cnt;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}