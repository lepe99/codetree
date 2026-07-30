#include <iostream>
#define M 101
using namespace std;

char a[M];

bool sol(char* a) {
    char temp = a[0];
    for (int i = 1; a[i]; i++) {
        if (a[i] != temp) return 1;
    }
    return 0;
}

int main() {
    // Please write your code here.
    cin >> a;
    cout << (sol(a) ? "Yes" : "No");
    return 0;
}