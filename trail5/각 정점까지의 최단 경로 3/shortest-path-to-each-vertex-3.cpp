#include <iostream>
#define MAX_V 105
#define MAX_E 1005
using namespace std;

struct Edge {
    int to;
    int weight;
    int next;
};

struct Node {
    int vertex;
    long long dist;
};

int n, m;
Edge edge[MAX_E];
int head[MAX_V];
int edgeCnt = 0;
long long dist[MAX_V];
long long INF = 1e18;

Node heap[MAX_E];
int hs = 0;

void swap(Node &a, Node &b) {
    Node temp = a;
    a = b;
    b = temp;
}

void push(Node x) {
    heap[++hs] = x;
    int cur = hs;
    while (cur > 1) {
        int parent = cur / 2;
        if (heap[cur].dist >= heap[parent].dist) break;
        swap(heap[cur], heap[parent]);
        cur = parent;
    }
}

Node pop() {
    Node res = heap[1];
    heap[1] = heap[hs--];
    int cur = 1;
    while (true) {
        int left = cur * 2, right = cur * 2 + 1, next = cur;
        if (left <= hs && heap[left].dist < heap[next].dist) next = left;
        if (right <= hs && heap[right].dist < heap[next].dist) next = right;
        if (cur == next) break;
        swap(heap[cur], heap[next]);
        cur = next;
    }
    return res;
}

void init(int n) {
    for (int i = 1; i <= n; i++) head[i] = -1;
}

void addEdge(int u, int v, int w) {
    edge[edgeCnt].to = v;
    edge[edgeCnt].weight = w;
    edge[edgeCnt].next = head[u];
    head[u] = edgeCnt++;
}

void dijkstra(int start) {
    for (int i = 1; i <= n; i++) dist[i] = INF;
    dist[start] = 0;
    push({start, 0});
    while (hs > 0) {
        Node cur = pop();
        int u = cur.vertex;
        long long d = cur.dist;
        if (d != dist[u]) continue;

        for (int i = head[u]; i != -1; i = edge[i].next) {
            int v = edge[i].to;
            int w = edge[i].weight;
            long long alt = dist[u] + w; 
            if (alt < dist[v]) {
                dist[v] = alt;
                push({v, alt});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    init(n);
    // 그래프 간선 추가
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        addEdge(u, v, w);
    }
    dijkstra(1);
    for (int i = 2; i <= n; i++) {
        if (dist[i] == INF) cout << -1 << '\n';
        else cout << dist[i] << '\n';
    }

    return 0;
}
