#include <iostream>
using namespace std;

void sol(int n) {
    if (n == 0) return;
    sol(n - 1);
    cout << "HelloWorld" << endl;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    sol(n);
    return 0;
}