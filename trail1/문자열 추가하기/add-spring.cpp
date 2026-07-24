#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char s[26]{};
    cin >> s;
    int len{};
    while (s[len]) ++len;
    char add[6]{"Hello"};
    for (int i = 0; add[i] != '\0'; i++) {
        s[len + i] = add[i];
    }
    cout << s;
    return 0;
}