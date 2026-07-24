#include <iostream>
#define M 1001
#define M1 101
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

    cout << s;
    return 0;
}