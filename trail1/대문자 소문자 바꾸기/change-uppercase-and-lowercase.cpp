#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char s[101];
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << (char) (s[i] - 'A' + 'a');
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            cout << (char) (s[i] - 'a' + 'A');
        }
    }
    return 0;
}