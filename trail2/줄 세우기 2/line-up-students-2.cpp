#include <stdio.h>

using namespace std;

int N;
struct A {
    int no;
    int h;
    int w;
} a[1000], temp[1000];

bool cmp(int i, int j) {
    if (a[i].h == a[j].h) return a[i].w >= a[j].w;
    return a[i].h <= a[j].h;
}

void merge(int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (cmp(i, j)) temp[k++] = a[i++];
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
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a[i].h, &a[i].w);
        a[i].no = i + 1;
    }

    // Please write your code here.
    mergeSort(0, N - 1);

    for (int i = 0; i < N; i++) {
        printf("%d %d %d\n", a[i].h, a[i].w, a[i].no);
    }
    return 0;
}