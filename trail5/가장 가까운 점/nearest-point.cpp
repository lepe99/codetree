#include <iostream>
#define MAX 100000
using namespace std;

struct S {
    int x;
    int y;
    int sum;
};

int n, m;
S heap[MAX + 1];
int hs;

bool cmp(S &s1, S &s2) {
    if (s1.sum == s2.sum) {
        return s1.x < s2.x;
    } else return s1.sum < s2.sum;
}

void swap(S &s1, S &s2) {
    S temp = s1;
    s1 = s2;
    s2 = temp;
}

void push(S x) {
    heap[++hs] = x;
    int cur = hs;
    while(cur > 1) {
        int parent = cur / 2;
        if (cmp(heap[parent], heap[cur])) break;
        swap(heap[parent], heap[cur]);
        cur = parent;
    }   
}

S pop() {
    S res = heap[1];
    heap[1] = heap[hs--];
    int cur = 1;
    while (true) {
        int left = cur * 2, right = cur * 2 + 1, next = cur;
        if (left <= hs && !cmp(heap[next], heap[left])) next = left;
        if (right <= hs && !cmp(heap[next], heap[right])) next = right;
        if (next == cur) break;
        swap(heap[next], heap[cur]);
        cur = next;
    }
    return res;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        S s;
        cin >> s.x >> s.y;
        s.sum = s.x + s.y;
        push(s);
    }

    for (int i = 0; i < m; i++) {
        S s = pop();
        s.x += 2;
        s.y += 2;
        s.sum += 4;
        push(s);
    }

    S s = pop();
    cout << s.x << ' ' << s.y;

    // Please write your code here.

    return 0;
}
