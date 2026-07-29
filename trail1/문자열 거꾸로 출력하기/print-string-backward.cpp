#include <iostream>
using namespace std;

void swap(char a[]) {
    int len{};
    while (a[len]) len++;
    for (int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }
}

bool same(const char* a, const char* b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return a[i] == b[i];
}

int main() {
    // Please write your code here.
    while (1) {
        char s[101];
        cin >> s;
        if (same(s, "END")) break;
        swap(s);
        cout << s << endl;
    }
    return 0;
}