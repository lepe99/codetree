#include <iostream>
using namespace std;

void sol(int n) {
    int a{};
    for (int i = 1; i <= n * n; i++) {
        a++;
        if (a == 10) a = 1;
        cout << a << " ";
        if (i % n == 0) cout << endl;
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    sol(n);
    return 0;
}