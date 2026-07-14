#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, prod = 1, x = 0;
    cin >> n;
    while (true) {
        prod *= 2;
        x++;
        if (prod == n) break;
    }
    cout << x;
    return 0;
}