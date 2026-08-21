#include <iostream>
// left 는 최대 힙, right 는 최소 힙, 두 힙 사용
using namespace std;

int t;
int m;
int lh[50001], rh[50001];
int ls, rs;

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
    cin >> t;
    for (int i = 0; i < t; i++) {
        ls = 0, rs = 0;
        cin >> m;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if (ls == 0 || x <= lh[1]) push(lh, ls, x, 0);
            else push(rh, rs, x, 1);
            if (ls > rs + 1) {
                int p = pop(lh, ls, 0);
                push(rh, rs, p, 1);
            } else if (ls < rs) {
                int p = pop(rh, rs, 1);
                push(lh, ls, p, 0);
            }
            if (j % 2 == 0) cout << lh[1] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
