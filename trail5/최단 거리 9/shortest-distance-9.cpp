#include <iostream>
#define MAXN 1000
#define MAXM 100000

struct Node {
    int vertex;
    long long dist;
};

constexpr long long INF = 1LL << 62;

int n, m;
int from, to, weight;
int A, B;

Node node[MAXM + 1];
int ns;
int adj[MAXN + 1][MAXN + 1];
long long dist[MAXN + 1];
int path[MAXN + 1];

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

void init() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) adj[i][j] = 0;
        dist[i] = INF;
        path[i] = -1;
    }
}

void push(Node x) {
    node[++ns] = x;
    int cur = ns;
    while(cur > 1) {
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

void dijkstra(int start) {
    dist[start] = 0;
    push({start, 0});
    while(ns != 0) {
        Node cur = pop();
        int u = cur.vertex;
        long long d = cur.dist;
        if (d != dist[u]) continue;
        for (int i = 1; i <= n; i++) {
            if (adj[u][i] == 0) continue;
            int v = i;
            int w = adj[u][i];
            long long alt = w + d;
            if (alt < dist[v]) {
                path[v] = u;
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
    for (int i = 0; i < m; i++) {
        std::cin >> from >> to >> weight;
        adj[from][to] = weight;
        adj[to][from] = weight;
    }

    std::cin >> A >> B;

    // Please write your code here.
    dijkstra(A);
    std::cout << dist[B] << '\n';
    int pos = B;
    int route[MAXN], rs = 0;
    route[rs++] = pos;
    while (pos != A) {
        pos = path[pos];
        route[rs++] = pos;
    }
    for (int i = rs - 1; i >= 0; i--) {
        std::cout << route[i] << ' ';
    }
    return 0;
}
