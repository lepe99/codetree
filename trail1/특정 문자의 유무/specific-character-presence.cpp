#include <iostream>
using namespace std;

bool contains(const char a[], const char b[]) {
    for (int i = 0; a[i]; i++) {
        if (a[i] == b[0]) {
            int j = 0;
            while (b[j] && a[i + j] == b[j]) j++;
            if (!b[j]) return true;
        }
    }
    return false;
}
int main() {
    char s[21];
    cin >> s;
    bool f1 = contains(s, "ee");
    bool f2 = contains(s, "ab");
    cout << (f1 ? "Yes" : "No") << ' ' << (f2 ? "Yes" : "No");
    return 0;
}