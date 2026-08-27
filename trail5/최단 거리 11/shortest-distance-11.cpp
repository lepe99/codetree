#include <iostream>
#define MAXN 1000
#define MAXM 100000

constexpr long long INF = 1LL << 62;

struct Node {
    int vertex;
    long long dist;
};

struct Edge {
    int to;
    int weight;
    int next;
};

int n, m;
int from, to, weight;
int A, B;

Node node[MAXM + 1];
Edge edge[2 * MAXM];
int head[MAXN + 1];
int ns, es;

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
        swap(node[cur], node[next]);
        cur = next;
    }
    return res;
}

void dijkstra(int start) {
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

void init() {
    for (int i = 1; i <= n; i++) {
        head[i] = -1;
        dist[i] = INF;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cin >> n >> m;
    init();
    for (int i = 0; i < m; i++) {
        std::cin >> from >> to >> weight;
        addEdge(to, from, weight);
        addEdge(from, to, weight);
    }

    std::cin >> A >> B;

    // Please write your code here.
    dijkstra(B);
    std::cout << dist[A] << '\n';
    int pos = A;
    std::cout << pos << ' ';
    while (pos != B) {
        int min = -1;
        for (int i = head[pos]; i != -1; i = edge[i].next) {
            int v = edge[i].to;
            int w = edge[i].weight;
            if (dist[pos] == dist[v] + w) {
                if (min == -1 || min > v) min = v;
            }
        }
        pos = min;
        std::cout << pos << ' ';
    }
    return 0;
}
