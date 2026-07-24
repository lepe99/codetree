#include <iostream>
#define M 1001
using namespace std;

int getDigit(int n) {
    int digit{1};
    while (n / 10 > 0) {
        digit++;
        n /= 10;
    }
    return digit;
}

int main() {
    char s[M];
    cin >> s;
    int len{}, lenr{};
    while(s[len]) ++len;
    char a = s[0];
    int cnt = 1;

    // 1. 길이 구하기
    for (int i = 1; i < len; i++) {
        if (s[i] == s[i - 1]) ++cnt;
        else {
            lenr += 1 + getDigit(cnt);
            cnt = 1;
        }
    }
    cout << lenr + 1 + getDigit(cnt) << endl;
    cnt = 1;
    // 인코딩
    for (int i = 1; i < len; i++) {
        if (s[i] == s[i - 1]) ++cnt;
        else {
            cout << a << cnt;
            a = s[i];
            cnt = 1;
        }
    }
    cout << a << cnt;
    
    return 0;
}