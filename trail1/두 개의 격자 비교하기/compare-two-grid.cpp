#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[10][10];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int b;
            cin >> b;
            cout << (a[i][j] == b ? 0 : 1) << " ";
        }
        cout << endl;
    }
    return 0;
}