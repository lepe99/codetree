#include <iostream>
using namespace std;

void one(char s[], int len) {
    char temp = s[0];
    for (int i = 0; s[i]; i++) {
        s[i] = s[i + 1];
    }
    s[len - 1] = temp;
}

void two(char s[], int len) {
    char temp = s[len - 1];
    for (int i = len - 1; i > 0; i--) {
        s[i] = s[i - 1];
    }
    s[0] = temp;
}

void three(char s[], int len) {
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}

int main() {
    // Please write your code here.
    char s[1001];
    int q, len{};
    cin >> s >> q;
    while (s[len]) ++len;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            one(s, len);
        } else if (t == 2) {
            two(s, len);
        } else {
            three(s, len);
        }
        cout << s << endl;
    }
    return 0;
}