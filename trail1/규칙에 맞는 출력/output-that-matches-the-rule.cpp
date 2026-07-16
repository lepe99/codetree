#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = n - i + 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}