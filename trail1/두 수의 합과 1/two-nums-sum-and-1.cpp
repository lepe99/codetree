#include <iostream>
using namespace std;

void itoa(int i, char a[]) {
    int idx = 0;
    // 문자에 넣기
    while (i > 0) {
        a[idx++] = i % 10 + '0';
        i /= 10;
    }
    // 뒤집기
    for (int i = 0; i < idx / 2; i++) {
        char temp = a[i];
        a[i] = a[idx - i - 1];
        a[idx - i - 1] = temp;
    }

    // 포장
    a[idx] = '\0';
}
int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    char c[5];
    itoa(a + b, c);
    int cnt{};
    for (int i = 0; c[i]; i++) {
        if (c[i] == '1') cnt++;
    }
    cout << cnt;
    return 0;
}