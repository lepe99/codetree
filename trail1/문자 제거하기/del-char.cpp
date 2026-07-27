#include <iostream>
using namespace std;

void pop(char s[], int t) {
    if (s[t] == '\0') {
        int len{};
        while(s[len]) len++;
        t = len - 1;
    }
    for (int i = t; s[i]; i++) {
        s[i] = s[i + 1];    
    }
}

int main() {
    // Please write your code here.
    char s[21]{};
    int len{}, t;
    cin >> s;
    while (s[len]) len++;
    for (int i = 0; i < len - 1; i++) {
        cin >> t;
        pop(s, t);
        cout << s << endl;
    }

    return 0;
}