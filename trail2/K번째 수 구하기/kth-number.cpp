#include <iostream>

using namespace std;

int N, k;
int nums[1000], temp[1000];

void merge(int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (nums[i] <= nums[j]) temp[k++] = nums[i++];
        else temp[k++] = nums[j++];
    }
    while (i <= mid) temp[k++] = nums[i++];
    while (j <= right) temp[k++] = nums[j++];

    for (int p = left; p <= right; p++) nums[p] = temp[p];
}

void mergeSort(int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    merge(left, mid, right);
}
int main() {
    cin >> N >> k;

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    mergeSort(0, N - 1);
    cout << nums[k - 1];
    return 0;
}
