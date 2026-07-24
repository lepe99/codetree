#include <iostream>
#define MAX_SIZE 201
using namespace std;

int main() {
    char s[10][MAX_SIZE];
    int sum{};
    for (int i = 0; i < 10; i++) {
        cin >> s[i];
    }
    for (int i = 9; i >= 0; i--) {
        cout << s[i] << endl;
    }
    return 0;
}