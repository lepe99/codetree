#include <iostream>
#define MAX 200000
using namespace std;

int n;
int heap[MAX + 1];
int hs = 0;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void push(int x) {
    heap[++hs] = x;
    int cur = hs;
    while (cur > 1) {
        int parent = cur / 2;
        if (heap[parent] <= heap[cur]) break;
        swap(heap[parent], heap[cur]);
        cur = parent;
    }
}

int pop() {
    if (hs == 0) return 0;
    int res = heap[1];
    heap[1] = heap[hs--];
    int cur = 1;
    while (true) {
        int left = cur * 2;
        int right = cur * 2 + 1;
        int next = cur;
        if (left <= hs && heap[left] < heap[next]) next = left;
        if (right <= hs && heap[right] < heap[next]) next = right;
        if (cur == next) break;
        swap(heap[next], heap[cur]);
        cur = next;
    }
    return res;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) cout << pop() << endl;
        else push(x);
    }
    return 0;
}
