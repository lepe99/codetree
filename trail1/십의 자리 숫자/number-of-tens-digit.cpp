#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10]{};
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        ++a[n / 10];
        
    }
    for (int i = 1; i <= 9; i++) {
        cout << i << " - " << a[i] << endl;
    }
    return 0;
}