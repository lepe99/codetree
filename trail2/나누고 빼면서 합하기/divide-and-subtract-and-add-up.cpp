#include <iostream>
#define M 101
using namespace std;

int n, m, sum{};
int a[M];

void sol() {
    while (m != 1) {
        sum += a[m - 1];
        if (m % 2 == 0) m /= 2;
        else m -= 1;
    } 
    sum += a[m - 1];
}


int main() {
    // Please write your code here.
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sol();
    cout << sum;
    return 0;
}