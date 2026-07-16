#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool f = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) f = 0;
        }
        if (f) cout << i << " ";
    }
    return 0;
}