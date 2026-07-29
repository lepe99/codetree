#include <iostream>
using namespace std;

void print_r(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << 1;
        }
        cout << endl;
    }
}
int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    print_r(n, m);
    return 0;
}