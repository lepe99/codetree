#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a[21];
    cin >> a;
    char f = a[0], s = a[1];
    for (int i = 0; a[i]; i++) {
        if (a[i] == f) a[i] = s;
        else if (a[i] == s) a[i] = f;
    }
    cout << a;
    return 0;
}