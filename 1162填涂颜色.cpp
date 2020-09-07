/*************************************************************************
	> File Name: 1162填涂颜色.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月04日 星期六 08时08分36秒
 ************************************************************************/

#include <iostream>
using namespace std;
void dfs(int x, int y);
int point[31][31], n;
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> point[i][j];
        }
    }
    dfs(0, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (point[i][j] == 2) cout << 0 << ' ';
            else if (point[i][j] == 1) cout << 1 << ' ';
            else cout << 2 << ' ';
        }
        cout << endl;
    }
    return 0;
}

void dfs(int x, int y) {
    if (x < 0 || x > n + 1 || y < 0 || y > n + 1 || point[x][y] != 0) return ;
    point[x][y] = 2;
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
    return ;
}
