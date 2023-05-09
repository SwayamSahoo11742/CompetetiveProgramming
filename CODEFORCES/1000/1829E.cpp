#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
int n, m;
int a[MAXN][MAXN];
bool visited[MAXN][MAXN];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

// dfs function to explore the lake
int dfs(int x, int y) {
    visited[x][y] = true;
    int volume = a[x][y];
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
        if (a[nx][ny] == 0) continue;
        if (visited[nx][ny]) continue;
        volume += dfs(nx, ny);
    }
    return volume;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                visited[i][j] = false;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] > 0 && !visited[i][j]) {
                    ans = max(ans, dfs(i, j));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
