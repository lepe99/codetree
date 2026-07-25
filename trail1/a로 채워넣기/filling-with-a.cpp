#include <iostream>
using namespace std;

int main() {
    char a[101];
    cin >> a;
    a[1] = 'a';
    int len{};
    while (a[len]) len++;
    a[len - 2] = 'a';
    cout << a;
    return 0;
}