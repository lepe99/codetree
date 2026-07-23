#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[15][15] {};
    for (int i = 0; i < n; i++) {
        arr[i][0] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}