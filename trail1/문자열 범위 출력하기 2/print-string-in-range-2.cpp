#include <iostream>
using namespace std;

int main() {
    char s[101];
    int n;
    cin >> s >> n;
    int len{};
    while (s[len]) ++len;
    for (int i = len - 1; i > len - 1 - n && i >= 0; i--) {
        cout << s[i];
    }
    return 0;
}