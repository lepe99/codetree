#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            sum += a[i][j];
        }
    }
    cout << sum;
    return 0;
}