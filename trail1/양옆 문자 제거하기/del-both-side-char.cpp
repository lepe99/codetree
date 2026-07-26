#include <iostream>
using namespace std;

void pop(char s[], int t) {
    int len{};
    while(s[len]) ++len;
    if (t < 0) t = len - 2;
    int idx{-1};
    for (int i = 0; s[i]; i++) {
        if (t <= i) {
            s[i] = s[i + 1];
        }
    }
}

int main() {
    // Please write your code here.
    char s[101];
    cin >> s;
    pop(s, 1);
    pop(s, -2);
    cout << s;
    return 0;
}