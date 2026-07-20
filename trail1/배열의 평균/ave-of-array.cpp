#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[2][4];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);

    // 가로 평균, 전체 평균
    int sum_r = 0, sum_c = 0, sum;
    for (int i = 0; i < 2; i++) {
        sum_r = 0;
        for (int j = 0; j < 4; j++) {
            sum += a[i][j];
            sum_r += a[i][j];
        }
        cout << (double) sum_r / 4 << " ";
    }

    cout << endl;

    // 세로 평균
    for (int i = 0; i < 4; i++) {
        sum_c = 0;
        for (int j = 0; j < 2; j++) {
            sum_c += a[j][i];
        }
        cout << (double) sum_c / 2 << " ";
    }

    cout << endl;

    cout << (double) sum / 8;
    return 0;
}