/*************************************************************************
	> File Name: 1101单词方阵.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月04日 星期六 06时55分22秒
 ************************************************************************/

#include<iostream>
using namespace std;
void dfs(int x, int y, int dx, int dy, int cnt);
char point[105][105], c[8] = {'y', 'i', 'z', 'h', 'o', 'n', 'g'}; 
int n, ans, flogpoint[105][105];
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> point[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (point[i][j] == 'y') {
                ans = 1;
                dfs(i, j, 0, 0, 0);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (flogpoint[i][j] == 1) cout << point[i][j];
            else cout << '*';
        }
        cout << endl;
    }
    return 0;
}

void dfs(int x, int y, int dx, int dy, int cnt) {
    if (dx != 0 || dy != 0) {
        if (x + dx >= 1 && x + dx <= n && y + dy >= 1 && y + dy <= n && cnt + 1 <= 6 && point[x + dx][y + dy] == c[cnt + 1]) {
            ans++;
            dfs(x + dx, y + dy, dx, dy, cnt + 1);
            if (ans == 7) flogpoint[x + dx][y + dy] = 1; 
        }
        return ;
    }
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (x + i >= 1 && x + i <= n && y + j >= 1 && y + j <= n && cnt + 1 <= 6 && point[x + i][y + j] == c[cnt + 1]) {
                ans++;
                dfs(x + i, y + j, i, j, cnt + 1);
                if (ans == 7) {
                    flogpoint[x][y] = 1;
                    flogpoint[x + i][y + j] = 1;
                }
                ans = 1;
            }
        }
    }
    return ;
}
