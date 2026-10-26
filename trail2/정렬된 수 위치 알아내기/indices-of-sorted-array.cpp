#include <stdio.h>

using namespace std;

int N;

struct Num {
    int ogi;
    int val;
} seq[1001], temp[1001];

int ans[1001];

void merge(int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (seq[i].val <= seq[j].val) temp[k++] = seq[i++];
        else temp[k++] = seq[j++];
    }
    while (i <= mid) temp[k++] = seq[i++];
    while (j <= right) temp[k++] = seq[j++];
    for (int p = left; p <= right; p++) seq[p] = temp[p];
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
    for (int i = 1; i <= N; i++) {
        int inp;
        scanf("%d", &inp);
        seq[i].val = inp;
        ans[i] = inp;
        seq[i].ogi = i;
    }

    // Please write your code here.
    mergeSort(1, N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (seq[j].ogi == i) {
                printf("%d ", j);
            }
        }
    }
    return 0;
}
