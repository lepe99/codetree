#include <iostream>
using namespace std;

bool sol(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0 && y % 400 != 0) return false;
        return true;
    }
    return false; 
}

int main() {
    // Please write your code here.
    int y;
    cin >> y;
    cout << (sol(y) ? "true" : "false");
    return 0;
}