#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    bool f = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (1920 % i == 0 && 2880 % i == 0) f = 1;
    }
    cout << f;
    return 0;
}