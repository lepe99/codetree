#include <iostream>
#define MAX_N 100 
using namespace std;

int a[MAX_N]{}, n, l{};

void insSort(int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() {
    // Please write your code here.
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        insSort(i + 1);
        if (i % 2 == 0) cout << a[i / 2] << " ";
    }
    return 0;
}