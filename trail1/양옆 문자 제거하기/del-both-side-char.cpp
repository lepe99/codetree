#include <iostream>
using namespace std;

void pop(char s[], int t) {
    int len{};
    while(s[len]) ++len;
    if (t < 0) t += len;
    for (int i = t; s[i]; i++) {
            s[i] = s[i + 1];
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