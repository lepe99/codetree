#include <iostream>
#define M 21
using namespace std;

int main() {
    char s[10][M], c;
    for (int i = 0; i < 10; i++) {
        cin >> s[i];
    }
    cin >> c;
    bool f = 0;
    for (int i = 0; i < 10; i++) {
        int len = 0;
        while (s[i][len]) ++len;
        if (s[i][len - 1] == c) {
            f = 1;
            cout << s[i] << endl;
        }
    }
    if (!f) cout << "None";
    return 0;
}