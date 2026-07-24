#include <iostream>
#define M 41
#define M1 5
using namespace std;

int main() {
    int n;
    char s[M]{};
    cin >> n;
    int len = 0;
    for (int i = 0; i < n; i++) {
        char add[M1];
        cin >> add;
        for (int j = 0; add[j] != '\0'; j++) {
            s[len++] = add[j];
        }
    }

    for (int i = 0; i < len; i++) {
        if (i % 5 == 0 && i != 0) cout << endl;
        cout << s[i];
    }
    return 0;
}