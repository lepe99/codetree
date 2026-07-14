#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    // 짝수 인덱스는 1
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++) {
            if ((i + j) % 2 == 1 || i == 0) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}