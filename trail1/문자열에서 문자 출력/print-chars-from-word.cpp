#include <iostream>
using namespace std;

int main() {
    char s[10];
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++) {
        cout << s[i] << endl;
    }
    return 0;
}