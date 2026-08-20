#include <iostream>
#define MAX 10000
using namespace std;

int n;
string command;
int heap[MAX + 1];
int heapSize = 0;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void push(int x) {
    heap[++heapSize] = x;
    int cur = heapSize;
    while (cur > 1) {
        int parent = cur / 2;
        if (heap[parent] >= heap[cur]) break;
        swap(heap[parent], heap[cur]);
        cur = parent;
    }
}

int pop() {
    int result = heap[1];
    heap[1] = heap[heapSize--];
    int cur = 1;
    while (true) {
        int left = cur * 2;
        int right = cur * 2 + 1;
        int next = cur;
        if (left <= heapSize && heap[left] > heap[next]) next = left;
        if (right <= heapSize && heap[right] > heap[next]) next = right;
        if (next == cur) break;
        swap(heap[next], heap[cur]);
        cur = next;
    }
    return result;
}

int size() {
    return heapSize;
}

bool empty() {
    return heapSize == 0;
}

int top() {
    return heap[1];
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == "push") {
            int x;
            cin >> x;
            push(x);
        } else if (command == "pop") {
            cout << pop() << endl;
        } else if (command == "size") {
            cout << size() << endl;
        } else if (command == "empty") {
            cout << empty() << endl;
        } else if (command == "top") {
            cout << top() << endl;
        }
        
    }
    return 0;
}
