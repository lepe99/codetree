#include <iostream>
#define M 1001
using namespace std;

int con_cnt(const char a[], const char b[]) {
    int cnt = 0;
    for (int i = 0; a[i]; i++) {
        int j = 0;
        while (b[j] && a[i + j] == b[j]) j++;
        if (!b[j]) cnt++;
    }
    return cnt;
}

int main() {
    char a[M], b[M];
    cin >> a >> b;
    cout << con_cnt(a, b);
    return 0;
}