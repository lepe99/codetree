#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int s, e, cnt = 0;
    cin >> s >> e;
    for (int i = s; i <= e; i++) {
        int sum = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) sum += j;
        }
        if (sum == i) cnt++;
    }
    cout << cnt;
    return 0;
}