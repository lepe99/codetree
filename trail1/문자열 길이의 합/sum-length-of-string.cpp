#include <iostream>
#define M 101
using namespace std;

int main() {
    int n, sum{}, cnt{};
    char s[10][M];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        int l{};
        while (s[i][l]) ++l;
        sum += l;
        if (s[i][0] == 'a') ++cnt; 
    }

    cout << sum << " " << cnt;
    return 0;
}