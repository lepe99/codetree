#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int min = A[0], cnt = 0;
    for (int i = 0; i < N; i++) {
        if (min > A[i]) {
            cnt = 0;
            min = A[i];
        }
        if (min == A[i]) {
            cnt++;
        }
    }

    cout << min << " " << cnt;

    return 0;
}
