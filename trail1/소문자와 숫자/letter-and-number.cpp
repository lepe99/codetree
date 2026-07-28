#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char s[101];
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9' ) {
            cout << s[i];
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << (char) (s[i] - 'A' + 'a');
        }
    }
    return 0;
}