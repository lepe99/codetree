#include <iostream>
#define M 21
using namespace std;

int main() {
    int n;
    char s[20][M], c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    cin >> c;
    int cnt{}, sum{};
    for (int i = 0; i < n; i++) {
        if (s[i][0] == c) {
            int len{};
            while(s[i][len]) ++len;
            ++cnt; 
            sum += len;
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << cnt << ' ' << (double) sum / cnt;
    return 0;
}