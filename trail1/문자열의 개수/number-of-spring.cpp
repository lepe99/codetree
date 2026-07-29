#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt{}, len{};
    char s[201][201];
    while (1) {
        char a[201];
        cin >> a;
        if (a[0] == '0' && !a[1]) break;
        if (cnt++ % 2 == 0) {
            for (int i = 0; a[i]; i++) {
                s[len][i] = a[i];
            }
            len++;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < len; i++) {
        cout << s[i] << endl;
    }
    return 0;
}