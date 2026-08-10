#include <iostream>
#define MAX_N 101
#define MAX_L 101
using namespace std;

char arr[MAX_N][MAX_L];
char temp[MAX_N][MAX_L];

// 오름차순 음수 내림차순 양수
int compare(const char* a, const char* b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
        i++;
    }
    if (!a[i] && !b[i]) return 0;
    if (!a[i]) return -1;
    return 1;
}

void copy(char* a, const char* b) {
    int i = 0;
    while (b[i]) {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';
}

void merge(int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (compare(arr[i], arr[j]) <= 0) {
            copy(temp[k], arr[i]);
            i++;
        } else {
            copy(temp[k], arr[j]);
            j++;
        }
        k++;
    }

    while (i <= mid) {
        copy(temp[k], arr[i]);
        i++;
        k++;
    }
    while (j <= right) {
        copy(temp[k], arr[j]);
        j++;
        k++;
    }

    for (int i = left; i <= right; i++) {
        copy(arr[i], temp[i]);
    }
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
        cin >> arr[i];
    }
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}