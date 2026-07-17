#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[11]{};
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        ++a[n / 10];
        
    }
    for (int i = 10; i >= 1; i--) {
        cout << i << "0 - " << a[i] << endl;
    }
    return 0;
}