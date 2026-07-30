#include <iostream>
using namespace std;

bool sol (const int* a, const int * b) {
    for (int i = 0; a[i]; i++) {
        int j = 0;
        while (b[j] && a[i + j] == b[j]) j++;
        if (!b[j]) return true;
    }
    return false;
}

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
    if (sol(a, b)) cout << "Yes";
    else cout << "No";
    return 0;
}