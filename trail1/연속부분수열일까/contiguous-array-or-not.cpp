#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n1, n2;
    cin >> n1 >> n2;
    int* a = new int[n1];
    int* b = new int[n2];
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }
    bool flag = 0;
    for (int i = 0; i < n1; i++) {
        if (flag) break;
        if (a[i] == b[0]) {
            flag = 1;
            for (int j = 1; j < n2; j++) {
                if (a[i + j] != b[j]) {
                    flag = 0;
                    break;
                }
            }
        }
    }

    cout << (flag ? "Yes" : "No");
    return 0;
}