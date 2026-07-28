#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;
    c += 1;
    if (c == 'z' + 1) c = 'a';
    cout << c;
    return 0;
}