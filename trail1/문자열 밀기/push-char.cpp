#include <iostream>
using namespace std;

int main() {
    char a[21];
    cin >> a;
    char temp = a[0];
    int len{};
    for (int i = 0; a[i]; i++) {
        a[i] = a[i + 1];
        len++;
    }
    a[len - 1] = temp;
    a[len] = '\0';
    cout << a;

    return 0;
}