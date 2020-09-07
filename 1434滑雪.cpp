/*************************************************************************
	> File Name: 1434滑雪.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月08日 星期日 15时07分01秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
#define ss 105
int r, c, point[ss][ss], flog[ss][ss], num[ss][ss], dd[5][2] = { -1, 0, 1, 0, 0, 1, 0, -1};
int dfs(int x, int y);
int main() {
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> point[i][j];
        }
    }
    int maxd = 0;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            maxd = max(dfs(i, j), maxd);
        }
    }
    cout << maxd << endl;
    return 0;
}
int dfs(int x, int y) {
    if (num[x][y] > 0) return num[x][y];
    flog[x][y] = 1;
    for (int i = 0; i <= 3; i++) {
        if (x + dd[i][0] >= 1 && x + dd[i][0] <= r && y + dd[i][1] >= 1 && y + dd[i][1] <= c && flog[x + dd[i][0]][y + dd[i][1]] == 0 && point[x + dd[i][0]][y + dd[i][1]] < point[x][y] ) {
            num[x][y] = max(dfs(x + dd[i][0], y + dd[i][1]), num[x][y]);
        }
    }
    flog[x][y] = 0;
    return ++num[x][y];
}
