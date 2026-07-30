#include <iostream>
using namespace std;

void sol1(int n) {
    if (n == 0) return;
    sol1(n - 1);
    cout << n << " ";
}

void sol2(int n) {
    if (n == 0) return;
    cout << n << " ";
    sol2(n - 1);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    sol1(n);
    cout << endl;
    sol2(n);
    return 0;
}