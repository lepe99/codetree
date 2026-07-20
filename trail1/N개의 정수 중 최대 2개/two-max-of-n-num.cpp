#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max1 = a[0], max2 = a[1];
    if (max1 < max2) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }
    for (int i = 0; i < n; i++) {
        max1 = max1 > a[i] ? max1 : a[i];
    }
    bool meet = 0;
    for (int i = 0; i < n; i++) {
        if (!meet && a[i] == max1) {
            meet = 1;
            continue;
        }
        max2 = max2 > a[i] ? max2 : a[i];
    }
    cout << max1 << " " << max2;
    return 0;
}