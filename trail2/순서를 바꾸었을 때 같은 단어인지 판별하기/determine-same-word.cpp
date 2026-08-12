#include <iostream>
#define MAX_L 100001
using namespace std;

char a[MAX_L], b[MAX_L], temp[MAX_L];

void merge(char* arr, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (int p = left; p <= right; p++) arr[p] = temp[p];
}

void mergeSort(char* arr, int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

bool comp(const char* a, const char* b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] != b[i]) return 0;
        i++;
    }
    if (!a[i] && !b[i]) return 1;
    return 0;
}

int main() {
    cin >> a >> b;
    int len_a{}, len_b{};
    while (a[len_a]) len_a++;
    while (b[len_b]) len_b++;
    mergeSort(a, 0, len_a - 1);
    mergeSort(b, 0, len_b - 1);
    cout << (comp(a, b) ? "Yes" : "No");
    return 0;
}
