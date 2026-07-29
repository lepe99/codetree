#include <iostream>
using namespace std;

void itoa(int i, char a[]) {
    int idx = 0;
    if (i == 0) a[idx++] = 0;
    while (i > 0) {
        a[idx++] = i % 10 + '0';
        i /= 10;
    }
    for (int i = 0; i < idx / 2; i++) {
        char temp = a[i];
        a[i] = a[idx - 1 - i];
        a[idx - 1 - i] = temp;
    }
    a[idx] = '\0';
}

int main() {
    // Please write your code here.
    int n, sum{};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        sum += m;
    }
    char s[5];
    itoa(sum, s);

    int len{};
    char temp = s[0];
    for (int i = 0; s[i]; i++) {
        s[i] = s[i + 1];
        len++;
    }
    s[len - 1] = temp;
    cout << s;
    return 0;
}