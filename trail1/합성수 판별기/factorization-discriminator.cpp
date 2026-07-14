#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    bool f = 0;
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            f = 1;
            break;
        }
    }
    cout << (f ? "C" : "N");
    return 0;
}