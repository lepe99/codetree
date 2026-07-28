#include <iostream>
using namespace std;
int stoi(const char* s) {
    int res{};
    for (int i = 0; s[i]; i++) {
        res = res * 10 + s[i] - '0';
    }
    return res;
}

int main() {
    // Please write your code here.
    char a[9], b[9];
    cin >> a >> b;
    for (int i = 0; i < a[i]; i++) {
        if (a[i] < '0' || a[i] > '9') {
            a[i] = '\0';
            break;
        }
    }
    for (int i = 0; i < b[i]; i++) {
        if (b[i] < '0' || b[i] > '9') {
            b[i] = '\0';
            break;
        }
    }
    cout << stoi(a) + stoi(b);
    return 0;
}