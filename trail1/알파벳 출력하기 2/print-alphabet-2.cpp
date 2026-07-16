#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    char c = 'A';
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << c << " ";
            if (c == 'Z') c = 'A';
            else c++;
        }
        cout << endl;
    }
    return 0;
}