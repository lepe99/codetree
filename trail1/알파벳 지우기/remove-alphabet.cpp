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
    char a[9], b[9], c[9], d[9];
    int len_c{}, len_d{};
    cin >> a >> b;
    for (int i = 0; a[i]; i++) {
        if (a[i] < '0' || a[i] > '9') continue;
        c[len_c++] = a[i];
    }
    c[len_c++] = '\0';
    for (int i = 0; b[i]; i++) {
        if (b[i] < '0' || b[i] > '9') continue;
        d[len_d++] = b[i];
    }
    d[len_d++] = '\0';
    cout << stoi(c) + stoi(d);
    return 0;
}