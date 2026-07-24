#include <iostream>
#define M 1001

using namespace std;

int con_idx (const char a[], const char b[]) {
    for (int i = 0; a[i]; i++) {
        int j = 0;
        while (b[j] && a[i + j] == b[j]) j++;
        if (!b[j]) return i;
    }
    return -1;
}

char input_str[M];
char target_str[M];

int main() {
    cin >> input_str;
    cin >> target_str;

    // Please write your code here.
    cout << con_idx(input_str, target_str);
    return 0;
}
