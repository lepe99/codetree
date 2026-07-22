#include <iostream>
using namespace std;

int main() {
    int dx[]{0, 1};
    int dy[]{1, 0};
    int m, n;
    cin >> n >> m;
    int arr[n][m]{};

    bool v[n][m]{};
    v[0][0] = 1;

    int qx[10000], qy[10000];
    int front = 0, rear = 0;

    int cnt = 0;
    
    arr[0][0] = ++cnt;

    qx[rear] = 0;
    qy[rear++] = 0;

    while (front != rear) {
        int x = qx[front];
        int y = qy[front++];

        for (int d = 0; d < 2; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx < n && ny < m && !v[nx][ny]) {
                v[nx][ny] = 1;
                arr[nx][ny] = ++cnt;
                qx[rear] = nx;
                qy[rear++] = ny;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}