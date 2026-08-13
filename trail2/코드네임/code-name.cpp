#include <iostream>
using namespace std;

struct A {
    char code;
    int score;
};

int main() {
    // Please write your code here.
    A a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i].code >> a[i].score;
    }
    int idx = 0, min = 100;
    for (int i = 0; i < 5; i++) {
        if (a[i].score < min) {
            min = a[i].score;
            idx = i;
        }
    }
    cout << a[idx].code << " " << a[idx].score;
    return 0;
}