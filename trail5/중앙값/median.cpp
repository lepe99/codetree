#include <iostream>
#define MAX 100000
using namespace std;

int t;
int m;
int lh[MAX / 2 + 1], rh[MAX / 2 + 1];
int ls, rs;
const bool MAX_HEAP = 0;
const bool MIN_HEAP = 1;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void push(int* heap, int &hs, int x, bool reversed) {
    heap[++hs] = x;
    int cur = hs;
    while (cur > 1) {
        int parent = cur / 2;
        if (!reversed) {
            if (heap[cur] <= heap[parent]) break;
        } else {
            if (heap[cur] >= heap[parent]) break;
        }
        swap(heap[cur], heap[parent]);
        cur = parent;
    }
}

int pop(int* heap, int &hs, bool reversed) {
    int res = heap[1];
    heap[1] = heap[hs--];
    int cur = 1;
    while (true) {
        int left = cur * 2, right = cur * 2 + 1, next = cur;
        if (!reversed) {
            if (left <= hs && heap[left] > heap[next]) next = left;
            if (right <= hs && heap[right] > heap[next]) next = right;
        } else {
            if (left <= hs && heap[left] < heap[next]) next = left;
            if (right <= hs && heap[right] < heap[next]) next = right;
        }
        if (cur == next) break;
        swap(heap[next], heap[cur]);
        cur = next;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    for (int i = 0; i < t; i++) {
        ls = 0, rs = 0;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if (ls == 0 || x <= lh[1]) push(lh, ls, x, MAX_HEAP);
            else push(rh, rs, x, MIN_HEAP);
            if (ls > rs + 1) {
                int p = pop(lh, ls, MAX_HEAP);
                push(rh, rs, p, MIN_HEAP);
            } else if (ls < rs) {
                int p = pop(rh, rs, MIN_HEAP);
                push(lh, ls, p, MAX_HEAP);
            }
            if (j % 2 == 0) cout << lh[1] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
