#include <iostream>
using namespace std;

struct S {
    char name[11];
    int a;
    int b;
    int c;
};
S s[10], t[10];

bool cmp(S s1, S s2) {
    return s1.a + s1.b + s1.c < s2.a + s2.b + s2.c;
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
        cin >> s[i].name;
        cin >> s[i].a;
        cin >> s[i].b;
        cin >> s[i].c;
    }
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << s[i].name << ' ';
        cout << s[i].a << ' ';
        cout << s[i].b << ' ';
        cout << s[i].c << endl;
    }
    return 0;
}