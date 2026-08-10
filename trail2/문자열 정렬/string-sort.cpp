#include <iostream>
#include <string>

using namespace std;

string str;

int main() {
    cin >> str;
    // Please write your code here.
    int a[26]{};
    for (int i = 0; i < str[i]; i++) {
        a[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        while (a[i] > 0) {
            cout << (char)('a' + i);
            a[i]--;
        }
    }
    return 0;
}