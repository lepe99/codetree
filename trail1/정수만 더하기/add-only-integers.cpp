#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char s[21];
    cin >> s;
    int sum{};
    for (int i = 0; s[i]; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            sum += s[i] - '0';
        }
    }
    cout << sum;
    return 0;
}