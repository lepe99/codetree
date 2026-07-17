#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, a[10]{};
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        ++a[m];
    }
    for (int i = 1; i <= 9; i++) {
        cout << a[i] << endl;
    }
    return 0;
}