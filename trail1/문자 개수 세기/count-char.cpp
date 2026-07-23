#include <iostream>
using namespace std;

int main() {
    char a[101], b;
    cin.getline(a, 101);
    cin >> b;
    int cnt = 0;
    for (int i = 0; i < 101; i++) {
        if (a[i] == '\0') break;
        if (a[i] == b) cnt++;
    }
    cout << cnt;
    return 0;
}