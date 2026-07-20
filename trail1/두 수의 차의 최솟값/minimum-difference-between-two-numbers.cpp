#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int min_diff = 100;
    for (int i = 0; i < n - 1; i++) {
        int diff = a[i + 1] - a[i];
        min_diff = min_diff < diff ? min_diff : diff;
    }
    cout << min_diff;
    return 0;
}