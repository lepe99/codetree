#include <iostream>
using namespace std;

void push(char a[]) {
    int len{};
    while (a[len]) len++;
    char temp = a[len - 1];
    for (int i = len - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

bool same(const char* a, const char* b) {
    int i{};
    while (a[i] && b[i]) {
        if (a[i] != b[i]) return false;
        i++;
    }
    return a[i] == b[i];
}

int main() {
    // Please write your code here.
    char a[101], b[101];
    cin >> a >> b;
    int len{}, cnt{};
    while (a[len]) len++;
    while (cnt < len) {
        cnt++;
        push(a);
        if (same(a, b)) break;
    }
    if (cnt == len) cnt = -1;
    cout << cnt;
    return 0;
}