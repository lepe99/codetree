#include <stdio.h>

int n, k;
int coins[10];

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }
    // Please write your code here.
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (k / coins[i] != 0) {
            cnt += k / coins[i];
            k %= coins[i];
        }
    }
    printf("%d", cnt);
    return 0;
}