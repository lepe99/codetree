#include <iostream>
#define MAX_N 101

using namespace std;

int a[MAX_N];
int temp[MAX_N];


// 병합정렬 구현 연습
void merge(int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;

    while(i <= mid && j <= right) {
        if (a[i] <= a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }

    while(i <= mid) temp[k++] = a[i++];
    while(j <= right) temp[k++] = a[j++];

    for (int i = left; i <= right; i++) a[i] = temp[i];
}

void mergeSort(int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    merge(left, mid, right);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    for (int i = n - 1; i >= 0; i--) cout << a[i] << " ";
    return 0;
}