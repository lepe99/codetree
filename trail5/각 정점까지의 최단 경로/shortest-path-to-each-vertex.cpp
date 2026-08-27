#include <iostream>
#define MAXE 300000
#define MAXN 20000


struct Edge {
    int to;
    int weight;
    int next;
};

struct Node {
    int vertex;
    long long dist;
};

constexpr long long INF = 1LL << 62;
int n, m, k;
Edge edge[2 * MAXE];
int es;
Node node[2 * MAXN + 1];
int ns;
int head[MAXN + 1];
long long dist[MAXN + 1];

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

void addEdge(int u, int v, int w) {
    edge[es].to = v;
    edge[es].weight = w;
    edge[es].next = head[u];
    head[u] = es++;
}

void push(Node x) {
    node[++ns] = x;
    int cur = ns;
    while (cur > 1) {
        int parent = cur / 2;
        if (node[parent].dist <= node[cur].dist) break;
        swap(node[parent], node[cur]);
        cur = parent;
    }
}

Node pop() {
    Node res = node[1];
    node[1] = node[ns--];
    int cur = 1;
    while (true) {
        int left = cur * 2, right = cur * 2 + 1, next = cur;
        if (left <= ns && node[next].dist > node[left].dist) next = left;
        if (right <= ns && node[next].dist > node[right].dist) next = right;
        if (cur == next) break;
        swap(node[cur], node[next]);
        cur = next;
    }
    return res;
}

void init() {
    es = 0;
    for (int i = 1; i <= n; i++) head[i] = -1;
}

void dijkstra(int start) {
    ns = 0;
    for (int i = 1; i <= n; i++) dist[i] = INF;
    dist[start] = 0;
    push({start, 0});
    while (ns != 0) {
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
    std::cin >> k;
    init();
    for (int i = 0; i < m; i++) {
        int u, v, w;
        std::cin >> u >> v >> w;
        addEdge(u, v, w);
        addEdge(v, u, w);
    }


    // Please write your code here.
    dijkstra(k);
    for (int i = 1; i <= n; i++) {
        std::cout << (dist[i] == INF ? -1 : dist[i]) << '\n';
    }
    return 0;
}
