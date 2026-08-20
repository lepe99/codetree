#include <iostream>
#define MAX 100000
using namespace std;

int n, m;
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
        if (heap[parent] >= heap[cur]) break;
        swap(heap[parent], heap[cur]);
        cur = parent;
    }
}

int pop() {
    int res = heap[1];
    heap[1] = heap[hs--];
    int cur = 1;
    while (true) {
        int left = cur * 2;
        int right = cur * 2 + 1;
        int next = cur;
        if (left <= hs && heap[left] > heap[next]) next = left;
        if (right <= hs && heap[right] > heap[next]) next = right;
        if (cur == next) break;
        swap(heap[next], heap[cur]);
        cur = next;
    }
    return res;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        push(inp);
    }

    // Please write your code here.
    for (int i = 0; i < m; i++) {
        push(pop() - 1);
    }
    cout << pop();
    return 0;
}
