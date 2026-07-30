#include <iostream>

using namespace std;

int a, b;

// ex) 3^13 = 3^8 * 3^4 * 3^1 (1101)
unsigned long long power(int base, int exp) {
    unsigned long long res = 1;
    while (exp > 0) {
        // & 1 비트연산으로 홀수(첫 비트 1)인 경우 추출
        if (exp & 1) res *= base;
        // b^2
        base *= base; 
        // 비트 이동
        exp >>= 1;
    }
    return res;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << power(a, b);
    return 0;
}

