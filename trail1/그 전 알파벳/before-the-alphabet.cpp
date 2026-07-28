#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c;
    cin >> c;
    c -= 1;
    if (c == 'a' - 1) c = 'z';
    cout << c;
    return 0;
}