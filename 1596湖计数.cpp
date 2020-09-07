/*************************************************************************
	> File Name: 1596.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月07日 星期二 18时59分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
void dfs(int x, int y);
char map[105][105]; 
int n, m, cnt;
int main () {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> map[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (map[i][j] == 'W') {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

void dfs(int x, int y) {
    if (map[x][y] == 'W') {
        map[x][y] = '.';
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                dfs(x + i, y + j);
            }
        }
    }
    return ;
}
