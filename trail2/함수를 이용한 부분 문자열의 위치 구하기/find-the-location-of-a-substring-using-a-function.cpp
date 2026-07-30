#include <iostream>
#define M 1001
using namespace std;

char a[M], b[M];

int sol(char* a, char* b) {
    for (int i = 0; a[i]; i++) {
        int j = 0;
        while (b[j] && a[i + j] == b[j]) j++;
        if (!b[j]) return i;
    }
    return -1;
}


int main() {
    // Please write your code here.
    cin >> a >> b;
    cout << sol(a, b);
    return 0;
}