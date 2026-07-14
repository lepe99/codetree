#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    bool f = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) f = 0;
    }
    cout << (f ? "P" : "C");
    return 0;
}