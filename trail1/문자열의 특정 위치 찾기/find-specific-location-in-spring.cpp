#include <iostream>
using namespace std;

int main() {
    char s[21], c;
    cin >> s >> c;
    int idx{-1};
    for (int i = 0; s[i]; i++) {
        if (s[i] == c) {
            idx = i;
            break;
        }
    }
    if (idx == -1) cout << "No";
    else cout << idx;
    return 0;
}