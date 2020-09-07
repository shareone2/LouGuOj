/*************************************************************************
	> File Name: 1123取数游戏.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月06日 星期日 19时59分55秒
 ************************************************************************/

#include <stdio.h>
int t, flog[20][20], ans = 0, n, m, num[20][20];
void dfs(int i, int j, int base);
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                scanf("%d", &num[i][j]);
            }
        }
        dfs(1, 1, 0);
        printf("%d\n", ans);
        ans = 0;
    }
    return 0;
}

void dfs(int i, int j, int base) {
    if (base > ans) { ans = base; }
    for (int x = i; x <= n; x++) {
        for (int y = 1; y <= m; y++) {
            if (!flog[x][y + 1] && !flog[x + 1][y + 1] && !flog[x + 1][y] && !flog[x + 1][y - 1] && !flog[x][y - 1] && !flog[x - 1][ y - 1] && !flog[x - 1][y] && !flog[x][y] && !flog[x - 1][y + 1]) {
                flog[x][y] = 1;
                dfs(x, y, base + num[x][y]); 
                flog[x][y] = 0;
            }
        }
    }
    return ;
}
