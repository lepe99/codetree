#include <iostream>
using namespace std;

int main() {
    char s[5][10] {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    cin >> c;
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (s[i][2] == c || s[i][3] == c) {
            cout << s[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}