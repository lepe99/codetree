#include <iostream>
#define M 101
using namespace std;

int main() {
    char a[M], b[M];
    char s1[M * 2], s2[M * 2];
    cin >> a >> b;
    int la{}, lb{};
    while (a[la]) ++la;
    while (b[lb]) ++lb;
    for (int i = 0; i < la + lb; i++) {
        if (i < la) s1[i] = a[i];
        else s1[i] = b[i - la];
        if (i < lb) s2[i] = b[i];
        else s2[i] = a[i - lb];
    }
    
    bool f = 1;
    for (int i = 0; i < la + lb; i++) {
        if (s1[i] != s2[i]) {
            f = 0;
            break;
        }
    }
    cout << (f ? "true" : "false");
    return 0;
}