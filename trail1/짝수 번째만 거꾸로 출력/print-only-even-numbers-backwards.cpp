#include <iostream>
#define M 101
using namespace std;

int main() {
    // Please write your code here.
    char s[M];
    cin >> s;
    int len{};
    while (s[len]) ++len;
    for (int i = len - 1; i >= 0; i--) {
        if (i % 2 == 1) cout << s[i];
    }
    return 0;
}