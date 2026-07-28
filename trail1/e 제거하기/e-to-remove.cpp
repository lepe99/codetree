#include <iostream>
using namespace std;

int main() {
    char a[101];
    cin >> a;
    for (int i = 0; a[i]; i++) {
        if (a[i] == 'e') {
            for (int j = i; a[j]; j++) {
                a[j] = a[j + 1];
            }
            break;
        }
    }
    cout << a;
    return 0;
}