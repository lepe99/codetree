#include <iostream>
using namespace std;
// 병합정렬 구현 연습
void mergeRange(int* a, int* temp, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;

    while(i <= mid && j <= right) {
        if (a[i] <= a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }

    while(i <= mid) temp[k++] =a [i++];
    while(j <= right) temp[k++] =a [j++];

    for (int i = left; i <= right; i++) a[i] = temp[i];
}

void mergeSortRec(int* a, int* temp, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSortRec(a, temp, left, mid);
    mergeSortRec(a, temp, mid + 1, right);
    mergeRange(a, temp, left, mid, right);
}

void mergeSort(int* a, int n) {
    if (n <= 1) return;
    int* temp = new int[n];
    mergeSortRec(a, temp, 0, n - 1);
    delete[] temp;
}

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    mergeSort(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    for (int i = n - 1; i >= 0; i--) cout << a[i] << " ";
    

    delete[] a;
    return 0;
}