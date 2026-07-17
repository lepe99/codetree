#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        if (n % 2 == 0) cout << n / 2;
        else cout << n + 3;
        cout << " ";
    }
    return 0;
}