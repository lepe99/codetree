#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ++cnt << " ";
        }
        cout << endl;
    }
    return 0;
}