/*************************************************************************
    > File Name: 1141（01）迷宫.cpp
    > Author: 
    > Mail: 
    > Created Time: 2019年05月01日 星期三 12时20分32秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
void dfs(int x, int y);
int n, m, point[1005][1005], ans[1005][1005], f[1000005], sx, sy, now, sum, dxy[5][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
#define ss(x, y, nextx, nexty) (point[x][y] != point[nextx][nexty] && nextx >= 1 && nextx <= n && nexty >= 1 && nexty <= n && !ans[nextx][nexty])
int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%1d", &point[i][j]);
        }
    }
    for (int i = 1; i <= m; i++) {
        cin >> sx >> sy;
        if (f[ans[sx][sy]] != 0) {
            cout << f[ans[sx][sy]] << endl;
            continue;
        }
        now++;
        sum = 0;
        dfs(sx, sy);
        cout << (f[now] = sum) << endl;
    }
    return 0;
}
void dfs(int x, int y) {
    sum++;
    ans[x][y] = now;
    for (int i = 0; i <= 3; i++) {
        if (ss(x, y, x + dxy[i][0], y + dxy[i][1])) {
            dfs(x + dxy[i][0], y + dxy[i][1]);
        }
    }
    return ;
}
