#include <iostream>
#include <stdio.h>
using namespace std;


struct Person {
    char name[11];
    int height;
    double weight;
} p[5], temp[5];

bool cmpStr(const char* a, const char* b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] > b[i]) return 0;
        else if (a[i] < b[i]) return 1;
        i++; 
    }
    if (!a[i] && !b[i]) return 1;
    if (!b[i]) return 0;
    return 1;
}

bool cmp(char c, int i, int j) {
    if (c == 'n') return cmpStr(p[i].name,p[j].name);
    else return p[i].height >= p[j].height;
}

void merge(int left, int mid, int right, char c) {
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (cmp(c, i, j)) temp[k++] = p[i++];
        else temp[k++] = p[j++];
    }
    while (i <= mid) temp[k++] = p[i++];
    while (j <= right) temp[k++] = p[j++];
    for (int pt = left; pt <= right; pt++) p[pt] = temp[pt];
}

void mergeSort(int left, int right, char c) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(left, mid, c);
    mergeSort(mid + 1, right, c);
    merge(left, mid, right, c);
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> p[i].name >> p[i].height >> p[i].weight;
    }

    // Please write your code here.
    mergeSort(0, 4, 'n');
    cout << "name" << '\n';
    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", p[i].name, p[i].height, p[i].weight);
    }
    mergeSort(0, 4, 'h');
    cout << '\n' << "height" << '\n';
    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", p[i].name, p[i].height, p[i].weight);
    }
    return 0;
}