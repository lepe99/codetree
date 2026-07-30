#include <iostream>
#define M 101
using namespace std;

bool prime[M];

void change_bool(int start, int acc, bool f) {
    for (int i = start; i < M; i += acc) {
        prime[i] = f;
    }
}

void sol(int n) {
    change_bool(2, 1, 1);
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) change_bool(i * i, i, 0);
    }
}

int num_s(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    // Please write your code here.
    int a, b, cnt{};
    cin >> a >> b;
    sol(b);
    for (int i = a; i <= b; i++) {
        if (prime[i] && num_s(i) % 2 == 0) cnt++;
    }
    cout << cnt;
    
    return 0;
}