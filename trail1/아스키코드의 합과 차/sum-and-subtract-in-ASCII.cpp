#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a, b;
    cin >> a >> b;
    cout << (int) a + b << " " << ((int) a - b < 0 ? (int) b - a : (int) a - b);
    return 0;
}