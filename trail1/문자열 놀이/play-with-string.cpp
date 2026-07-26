#include <iostream>
using namespace std;

void type1(char s[], int a, int b) {
    char temp = s[a - 1];
    s[a - 1] = s[b - 1];
    s[b - 1] = temp;
}

void type2(char s[], char x, char y) {
    for (int i = 0; s[i]; i++) {
        if (s[i] == x) s[i] = y;
    }
}

int main() {
    // Please write your code here.
    char s[101];
    int q;
    cin >> s >> q;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            int a, b;
            cin >> a >> b;
            type1(s, a, b);
        } else {
            char x, y;
            cin >> x >> y;
            type2(s, x, y);
        }
        cout << s << endl;
    }
    return 0;
}