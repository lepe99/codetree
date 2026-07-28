#include <iostream>
using namespace std;

int stoi(char s[]) {
    int res{};
    for (int i = 0; s[i]; i++) {
        res = res * 10 + (s[i] - '0');
    }
    return res;
}

int main() {
    // Please write your code here.
    char a[5], b[5], ab[9], ba[9];
    cin >> a >> b;
    int len_ab{-1}, len_ba{-1};
    for (int i = 0; a[i]; i++) ab[++len_ab] = a[i]; 
    for (int i = 0; b[i]; i++) {
        ab[++len_ab] = b[i]; 
        ba[++len_ba] = b[i]; 
    }
    for (int i = 0; a[i]; i++) ba[++len_ba] = a[i]; 
    ab[++len_ab] = '\0'; 
    ba[++len_ba] = '\0';
    cout << stoi(ab) + stoi(ba);
    return 0;
}