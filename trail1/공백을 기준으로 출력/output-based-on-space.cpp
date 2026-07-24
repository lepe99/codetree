#include <iostream>
using namespace std;

int main() {
    char a[101], b[101];
    cin.getline(a, 101);
    cin.getline(b, 101);
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] != ' ') cout << a[i];
    }
    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] != ' ') cout << b[i];
    }
    return 0;
}