/*************************************************************************
	> File Name: 1331海战.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月07日 星期二 10时37分48秒
 ************************************************************************/

#include <iostream>
using namespace std;
void dfs(int x, int y);
int r, c, cnt, judge, flog[1005][1005]; 
char point[1005][1005];
int main () {
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> point[i][j];
        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (point[i][j] == '#' && !flog[i][j]) {
                dfs(i, j);
                if (judge) return 0;
                cnt++;
            }
        }
    }
    cout << "There are " << cnt << " ships." << endl;
    return 0;
}
void dfs(int x, int y) {
    if ((point[x - 1][y] == '#' && point[x - 1][y - 1] == '.' && point[x][y - 1] == '#') || (point[x - 1][y] == '#' && point[x - 1][y + 1] == '.' && point[x][y + 1] == '#') || (point[x + 1][y] == '#' && point[x + 1][y - 1] == '.' && point[x][y - 1] == '#') || (point[x + 1][y] == '#' && point[x + 1][y + 1] == '.' && point[x][y + 1] == '#')) {
        cout << "Bad placement." << endl;
        judge = 1;
        return ;
    }
    if (point[x][y] == '#' && !flog[x][y]) {
        flog[x][y] = 1;
        if (!judge) dfs(x - 1, y);
        if (!judge) dfs(x + 1, y);
        if (!judge) dfs(x, y - 1);
        if (!judge) dfs(x, y + 1);
    }
    return ;
}

