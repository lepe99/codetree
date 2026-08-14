#include <iostream>

using namespace std;

int n;
struct A {
    char s[11];
    int h;
    int w;
};

A a[10], temp[10];

void copy(char* to, const char* from) {
    int i = 0;
    while (from[i]) {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
} 

void merge(int left, int mid, int right) {
    int i = left, k = left, j = mid + 1;
    while (i <= mid && j <= right) {
        if (a[i].h <= a[j].h) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }
    while (i <= mid) temp[k++] = a[i++];
    while (j <= right) temp[k++] = a[j++];
    for (int p = left; p <= right; p++) a[p] = temp[p];
}

void mergeSort(int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    merge(left, mid, right);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        char inp[11];
        cin >> inp >> a[i].h >> a[i].w;
        copy(a[i].s, inp);
    }

    // Please write your code here.
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i].s << " " << a[i].h << " " << a[i].w << endl; 
    }
    return 0;
}