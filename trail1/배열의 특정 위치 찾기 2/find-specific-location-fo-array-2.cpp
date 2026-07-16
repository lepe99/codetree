#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[10], sum1 = 0, sum2 = 0;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) sum1 += a[i];
        else sum2 += a[i];
    }
    cout << (sum1 < sum2 ? sum2 - sum1 : sum1 - sum2);
    return 0;
}