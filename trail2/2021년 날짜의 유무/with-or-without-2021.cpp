#include <iostream>
using namespace std;

int mon[]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool sol(int m, int d) {
    return m <= 12 && d <= mon[m];    
}

int main() {
    // Please write your code here.
    int m, d;
    cin >> m >> d;
    cout << (sol(m, d) ? "Yes" : "No");
    return 0;
}