import java.util.*;

public class Main {
    static final int MAX_E = 600000;
    static final int MAX_V = 20000;
    static int[] to = new int[MAX_E];
    static int[] weight = new int[MAX_E];
    static int[] next = new int[MAX_E];
    static int[] head = new int[MAX_V + 1];
    static int es, n, m, k;
    static int[] dist = new int[MAX_V + 1];
    static void addEdge(int u, int v, int w) {
        to[es] = v;
        weight[es] = w;
        next[es] = head[u];
        head[u] = es++;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        k = sc.nextInt();
        init();
        for (int i = 0; i < m; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            int w = sc.nextInt();
            addEdge(u, v, w);
            addEdge(v, u, w);
        }
        // Please write your code here.
        dijkstra(k);
        for (int i = 1; i <= n; i++) {
            System.out.println(dist[i] == Integer.MAX_VALUE ? -1 : dist[i]);
        }
        
    }

    static void init() {
        es = 0;
        Arrays.fill(head, 1, n + 1, -1);
    }
    
    static void dijkstra(int start) {
        PriorityQueue<int[]> pq = new PriorityQueue<>((o1, o2) -> Integer.compare(o1[1], o2[1]));
        Arrays.fill(dist, 1, n + 1, Integer.MAX_VALUE);
        dist[start] = 0;
        pq.offer(new int[] {start, 0});
        while (pq.size() > 0) {
            int[] cur = pq.poll();
            int u = cur[0];
            int d = cur[1];
            if (d != dist[u]) continue;
            for (int i = head[u]; i != -1; i = next[i]) {
                int v = to[i];
                int w = weight[i];
                int alt = d + w;
                if (dist[v] > alt) {
                    dist[v] = alt;
                    pq.offer(new int[] {v, alt});
                }
            }
        }
    }

}