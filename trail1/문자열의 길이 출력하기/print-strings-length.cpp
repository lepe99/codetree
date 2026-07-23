#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a[101], b[101];
    cin >> a >> b;

    int l = 0, m = 0;
    while (a[++l]);
    while (b[++m]);
    cout << l + m;
    return 0;
}