#include <iostream>
using namespace std;

struct S {
    int h;
    int w;
    int a;
};
S s[1000], t[1000];

bool cmp(S s1, S s2) {
    if (s1.h == s2.h) {
        if (s1.w == s2.w) return s1.a <= s2.a;
        else return s1.w >= s2.w;
    } else return s1.h >= s2.h;
}

void merge(int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (cmp(s[i], s[j])) t[k++] = s[i++];
        else t[k++] = s[j++];
    }
    while (i <= mid) t[k++] = s[i++];
    while (j <= right) t[k++] = s[j++];
    for (int p = left; p <= right; p++) s[p] = t[p];
}

void mergeSort(int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    merge(left, mid, right);
}


int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i].h;
        cin >> s[i].w;
        s[i].a = i + 1;
    }
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << s[i].h << ' ';
        cout << s[i].w << ' ';
        cout << s[i].a << endl;
    }
    return 0;
}