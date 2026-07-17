#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[7]{};

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        ++a[n];
    }
    for (int i = 1; i <= 6; i++) {
        printf("%d - %d\n", i, a[i]);
    }
    return 0;
}