#include <iostream>

using namespace std;

int n;
int arr[100];

int sol(int* arr, int i) {
    if (i == -1) return 0;
    int max = sol(arr, i - 1);
    return arr[i] > max ? arr[i] : max;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << sol(arr, n - 1);
    return 0;
}