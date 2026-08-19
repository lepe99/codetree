#include <iostream>

using namespace std;

int n;
struct A {
    char name[11];
    int korean;
    int english;
    int math;
};

A a[10], temp[10];

bool cmp(A a, A b) {
    if (a.korean == b.korean) {
        if (a.english == b.english) 
            return a.math > b.math;
        else return a.english > b.english;
    } else return a.korean > b.korean;
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
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    merge(left, mid, right);
}


int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i].name;
        cin >> a[i].korean;
        cin >> a[i].english;
        cin >> a[i].math;
    }

    // Please write your code here.
    mergeSort(0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " ";
        cout << a[i].korean << " ";
        cout << a[i].english << " ";
        cout << a[i].math << endl;
    }
    return 0;
}