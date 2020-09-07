/*************************************************************************
	> File Name: 1506拯救总部.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月04日 星期六 08时55分54秒
 ************************************************************************/

#include <iostream>
using namespace std;
void dfs(int x, int y);
char c; 
int m, n, cnt, point[501][501];
int main () {
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c;
            if (c == '0') point[i][j] = 0;
            else if (c == '*') point[i][j] = 1;
        }
    }
    dfs(0, 0);
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (!point[i][j]) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

void dfs(int x, int y) {
    if (x < 0 || x > m + 1 || y < 0 || y > n + 1 || point[x][y]) return ;
    point[x][y] = 1;
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
    return ;
}
