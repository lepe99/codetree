#include <iostream>

using namespace std;

int n;
int x[1000];
int y[1000];
int a[1000], temp[1000];

bool cmp(const int i, const int j) {
    int di = (x[i] > 0 ? x[i] : -x[i]) + (y[i] > 0 ? y[i] : -y[i]);
    int dj = (x[j] > 0 ? x[j] : -x[j]) + (y[j] > 0 ? y[j] : -y[j]);
    return di <= dj;
}

void merge(int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (cmp(a[i], a[j])) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }
    while (i <= mid) temp[k++] = a[i++];
    while (j <= right) temp[k++] = a[j++];
    for (int p = left; p <= right; p++) a[p] = temp[p];
}

void mergeSort(int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    merge(left, mid, right);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        a[i] = i;
    }

    // Please write your code here.
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] + 1 << '\n';
    }
    return 0;
}
