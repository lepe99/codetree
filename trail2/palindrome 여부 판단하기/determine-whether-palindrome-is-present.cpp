#include <iostream>

using namespace std;

char a[101], b[101];

void swap(char* a) {
    int len{};
    while (a[len]) len++;
    for (int i = 0; i < len / 2; i++) {
        int temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }
}

void copy(char* a, char* b) {
    int i = 0;
    while (a[i]) {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
}

bool same(char* a, char* b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return a[i] == b[i];
}

int main() {
    cin >> a;
    copy(a, b);
    swap(a);
    cout << (same(a, b) ? "Yes" : "No");

    // Please write your code here.

    return 0;
}