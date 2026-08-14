#include <iostream>
using namespace std;

struct A {
    char b[11];
    char c[8];
    char d[11];
};

void copy(const char* from, char* to) {
    int i = 0;
    while (from[i]) {
        to[i] = from[i];
        i++;
        }
    to[i] = '\0';
}

int compare(const char* a, const char* b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] < b[i]) return -1;
        else if (a[i] > b[i]) return 1;
        i++;
    }
    while (!a[i] && !b[i]) return 0;
    while (a[i]) return 1;
    return -1;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    A a[n];
    for (int i = 0; i < n; i++) {
        char q[11], w[8], e[11];
        cin >> q >> w >> e;
        copy (q, a[i].b);
        copy (w, a[i].c);
        copy (e, a[i].d);
    }
    char last[11];
    copy(a[0].b, last);
    int idx{};
    for (int i = 0; i < n; i++) {
        if (compare(last, a[i].b) == -1) {
            copy(a[i].b, last);
            idx = i;
        }
    }
    cout << "name " << a[idx].b << endl;
    cout << "addr " << a[idx].c << endl;
    cout << "city " << a[idx].d << endl;


    return 0;
}