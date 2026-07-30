#include <iostream>

using namespace std;

int n, m;
int arr[100];

int sol(int a1, int a2) {
    int sum{};
    for (int i = a1; i <= a2; i++) {
        sum += arr[i - 1];
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        
        cout << sol(a1, a2) << endl;
    }

    // Please write your code here.

    return 0;
}