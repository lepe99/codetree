#include <iostream>
using namespace std;

struct S {
    int pn;
    int pm = 0;
    int val;
};

int n, m, k;
int arr1[100000];
int arr2[100000];
int temp[100000];
S heap[100001];
int hs = 0;

bool cmp(const int &a, const int &b) {
    return a < b;    
}

bool cmph(const S &a, const S &b) {
    return a.val < b.val;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void push(S x) {
    heap[++hs] = x;
    int cur = hs;
    while (cur > 1) {
        int parent = cur / 2;
        if (!cmph(heap[cur], heap[parent])) break;
        swap(heap[cur], heap[parent]);
        cur = parent;
    }
}

S pop() {
    S res = heap[1];
    heap[1] = heap[hs--];
    int cur = 1;
    while (true) {
        int left = cur * 2, right = cur * 2 + 1, next = cur;
        if (left <= hs && cmph(heap[left], heap[next])) next = left;
        if (right <= hs && cmph(heap[right], heap[next])) next = right;
        if (next == cur) break;
        swap(heap[next], heap[cur]);
        cur = next;
    }
    return res;
}

void merge(int* a, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (!cmp(a[j], a[i])) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }
    while (i <= mid) temp[k++] = a[i++];
    while (j <= right) temp[k++] = a[j++];
    for (int p = left; p <= right; p++) a[p] = temp[p];
}

void mergeSort(int* a, int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);
    merge(a, left, mid, right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    mergeSort(arr2, 0, m - 1);

    for (int i = 0; i < n; i++) {
        S s;
        s.pn = i;
        s.val = arr1[i] + arr2[0];
        push(s);
    }
    for (int i = 1; i <= k; i++) {
        S s = pop();
        if (i == k) {
            cout << s.val;
            break;
        }
        s.pm++;
        s.val = arr1[s.pn] + arr2[s.pm];
        push(s);
    }

    return 0;
}
