#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char s[11];
    cin >> s;
    int l{};
    cout << s << endl;
    while (s[l]) ++l;
    for (int i = 0; i < l; i++) {
        char temp = s[l - 1];
        for (int j = l - 1; j > 0; j--) {
            s[j] = s[j - 1];
        }
        s[0] = temp;
        cout << s << endl;
    }
    
    return 0;
}