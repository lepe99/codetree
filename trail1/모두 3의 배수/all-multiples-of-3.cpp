#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    bool f = 1;
    int n;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (n % 3 != 0) f = 0;
    }
    cout << f;
    return 0;
}