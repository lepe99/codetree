#include <iostream>
using namespace std;

int main() {
    char s[101];
    cin.getline(s, 101);
    for (int i = 2; i < 10; i++) {
        cout << s[i];
    }
    return 0;
}