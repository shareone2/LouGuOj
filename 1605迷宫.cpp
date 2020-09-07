/*************************************************************************
	> File Name: 1605迷宫.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月30日 星期二 18时11分56秒
 ************************************************************************/

#include <iostream>
using namespace std;
void dfs(int x, int y);
bool flog[6][7];
int n, m, t, sx, sy, fx, fy, zhangai[6][7], locationx, locationy, ans;
int main () {
    cin >> n >> m >> t >> sx >> sy >> fx >> fy;
    for (int i = 1; i <= t; i++) {
        cin >> locationx >> locationy;
        zhangai[locationx][locationy] = 1;
    }
    dfs(sx, sy);
    cout << ans << endl;
    return 0;
}

void dfs(int x, int y) {
    if (x == fx && y == fy) {
        if (zhangai[x][y] == 0) ans++;
        return ;
    }
    if (x >= 1 && x <= n && y >= 1 && y <= m && zhangai[x][y] == 0 && flog[x][y] == 0) {
        flog[x][y] = 1;
        dfs(x - 1, y);
        dfs(x + 1, y);
        dfs(x, y - 1);
        dfs(x, y + 1);
        flog[x][y] = 0;
    }
    return ;
}
