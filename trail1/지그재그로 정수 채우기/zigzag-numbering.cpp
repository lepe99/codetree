#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    int a[n][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) a[j][i] = cnt++;
            else a[n - 1 - j][i] = cnt++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}