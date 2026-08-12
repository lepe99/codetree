#include <iostream>
#define MAX_N 100
#define MAX_L 101
using namespace std;

char a[MAX_N][MAX_L], temp[MAX_N][MAX_L], t[MAX_L], inp[MAX_L];
int n, k, m{};

void copy(const char* from, char* to) {
    int i = 0;
    while (from[i]) {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}

void add_t(char* t, char* inp) {
    int i = 0;
    bool f = 1;
    while (t[i]) {
        if (inp[i] != t[i]) f = 0;
        i++;
    }
    if (f) copy(inp, a[m++]);
}

int comp(const char* a, const char* b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
        i++;
    }
    if (!a[i] && !b[i]) return 0;
    if (a[i]) return 1;
    return -1;
}

void merge(int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (comp(a[i], a[j]) <= 0) copy(a[i++], temp[k++]);
        else copy(a[j++], temp[k++]);
    }
    while (i <= mid) copy(a[i++], temp[k++]);
    while (j <= right) copy(a[j++], temp[k++]);
    for (int p = left; p <= right; p++) copy(temp[p], a[p]);
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
    cin >> n >> k >> t;
    for (int i = 0; i < n; i++) {
        cin >> inp;
        add_t(t, inp);
    }
    mergeSort(0, m - 1);
    cout << a[k - 1];

    return 0;
}