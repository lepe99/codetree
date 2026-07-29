#include <iostream>
using namespace std;

int sol(int n, int m) {
    int min = n < m ? n : m;
    for (int i = min; i > 0; i--) {
        if (n % i == 0 && m % i == 0) {
            return i;
        }
    }
    return 0;
}

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    cout << sol (n, m);
    return 0;
}