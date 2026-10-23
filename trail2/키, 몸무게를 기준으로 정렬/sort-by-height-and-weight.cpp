#include <iostream>
#include <stdio.h>

using namespace std;

int n;
struct P {
    char name[11];
    int height;
    int weight;
} p[10], temp[10];

bool cmp(const P p1, const P p2) {
    if (p1.height == p2.height) return p1.weight >= p2.weight;
    else return p1.height <= p2.height;
}



void merge(int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (cmp(p[i], p[j])) temp[k++] = p[i++];
        else temp[k++] = p[j++];
    }
    while (i <= mid) temp[k++] = p[i++];
    while (j <= right) temp[k++] = p[j++];
    for (int pt = left; pt <= right; pt++) p[pt] = temp[pt];
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
        cin >> p[i].name >> p[i].height >> p[i].weight;
    }
    mergeSort(0, n - 1);
    

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        printf("%s %d %d\n", p[i].name, p[i].height, p[i].weight);
    }
    return 0;
}