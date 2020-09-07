/*************************************************************************
	> File Name: 1451求细胞数量.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月30日 星期二 19时18分56秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
void dfs(int x, int y);
int cell[105][105], m, n, ans;
int main () {
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%1d", &cell[i][j]);
        }       
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (cell[i][j] >= 1) {
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

void dfs(int x, int y) {
    if (cell[x][y] >= 1) {
        cell[x][y] = 0;
        dfs(x - 1, y);
        dfs(x + 1, y);
        dfs(x, y - 1);
        dfs(x, y + 1);
    }
    return ;
}
