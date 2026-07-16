#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}