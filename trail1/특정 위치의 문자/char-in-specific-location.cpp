#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s = "LEBROS";
    char c;
    cin >> c;
    int idx = s.find(c);
    if (idx == -1) cout << "None";
    else cout << idx;
    return 0;
}