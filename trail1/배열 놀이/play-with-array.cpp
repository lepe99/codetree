#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, q;
    cin >> n >> q;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        a[i] = inp;
    }
    for (int i = 0; i < q; i++) {
        int f, s, t;
        cin >> f >> s;
        if (f == 1) cout << a[s - 1];
        else if (f == 2) {
            bool f = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == s) {
                    f = 1;
                    cout << i + 1;
                    break;
                }
            }
            if (!f) cout << 0;
        }
        else {
            cin >> t;
            for (int i = s - 1; i < t; i++) {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    delete[] a;
    return 0;
}