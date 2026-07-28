#include <iostream>
#define M 101
using namespace std;

int solution(char a[], char b[], int idx) {
    for (int i = idx; a[i]; i++) {
        int j = 0;
        while (b[j] && a[i + j] == b[j]) j++;
        if (!b[j]) {
            for (int k = i; a[k]; k++) {
                a[k] = a[k + j];
            }
            return i - j + 1 < 0 ? 0 : i - j + 1;
        }
    }
    return -1;
}

int main() {
    // Please write your code here.
    char a[M], b[M];
    cin >> a >> b;
    int idx{};
    do {
        idx = solution(a, b, idx);
    } while (idx != -1);
    cout << a;
    return 0;
}