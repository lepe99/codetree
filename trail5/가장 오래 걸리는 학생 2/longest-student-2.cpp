#include <iostream>
#define MAXN 100000
#define MAXE 100000

struct Node {
    int vertex;
    long long dist;
};

struct Edge {
    int to;
    int weight;
    int next;
};

constexpr long long INF = 1LL << 62;

Node node[MAXE + 1];
Edge edge[MAXE];
int head[MAXN + 1];
int ns, es;

long long dist[MAXN + 1];

int n, m;
int i, j, d;

void addEdge(int u, int v, int w) {
    edge[es].to = v;
    edge[es].weight = w;
    edge[es].next = head[u];
    head[u] = es++;
}

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

void push(Node x) {
    node[++ns] = x;
    int cur = ns;
    while (cur > 1) {
        int parent = cur / 2;
        if (node[cur].dist >= node[parent].dist) break;
        swap(node[cur], node[parent]);
        cur = parent;
    }
}

Node pop() {
    Node res = node[1];
    node[1] = node[ns--];
    int cur = 1;
    while (true) {
        int left = cur * 2, right = cur * 2 + 1, next = cur;
        if (left <= ns && node[next].dist > node[left].dist)
            next = left;
        if (right <= ns && node[next].dist > node[right].dist)
            next = right;
        if (next == cur) break;
        swap(node[next], node[cur]);
        cur = next;
    } 
    return res;
}

void init() {
    int ns = 0;
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
        head[i] = -1;
    }
}

void dijkstra(int start) {
    dist[start] = 0;
    push({start, 0});

    while(ns != 0) {
        Node cur = pop();
        int u = cur.vertex;
        long long d = cur.dist;
        if (d != dist[u]) continue;
        for (int i = head[u]; i != -1; i = edge[i].next) {
            int v = edge[i].to;
            int w = edge[i].weight;
            long long alt = d + w;
            if (alt < dist[v]) {
                dist[v] = alt;
                push({v, alt});
            }
        }
    }
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cin >> n >> m;
    init();
    for (int k = 0; k < m; k++) {
        std::cin >> i >> j >> d;
        addEdge(j, i, d);
    }

    // Please write your code here.
    dijkstra(n);
    int res = 0;
    for (int i = 1; i < n; i++) {
        if (dist[i] != INF && res < dist[i]) res = dist[i];
    }
    std::cout << res;

    return 0;
}
