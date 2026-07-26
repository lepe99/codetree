#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char s[101];
    cin >> s;
    char a = s[1];
    for (int i = 0; s[i]; i++) {
        if (s[i] == a) s[i] = s[0];
    }
    cout << s;
    return 0;
}