#include <iostream>
using namespace std;

int contains_cnt(const char a[], const char b[]) {
    int cnt{};
    for (int i = 0; a[i]; i++) {
        int j = 0;
        while (b[j] && a[i + j] == b[j]) j++;
        if (!b[j]) ++cnt;
    }
    return cnt;
}

int main() {
    char s[21];
    cin >> s;
    cout << contains_cnt(s, "ee") << " ";
    cout << contains_cnt(s, "eb") << endl;
    return 0;
}