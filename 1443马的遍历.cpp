/*************************************************************************
	> File Name: 1443马的遍历.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月07日 星期二 20时47分34秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <queue>
using namespace std;
int flog[405][405], point[405][405], n, m, sx, sy;
queue <int> QX;
queue <int> QY;
int main () {
    scanf("%d %d %d %d", &n, &m, &sx, &sy);
    point[sx][sy] = 0;
    flog[sx][sy] = 1;
    QX.push(sx);
    QY.push(sy);
    while (!QX.empty() && !QY.empty()) {
        int basex = QX.front();
        int basey = QY.front();
        QX.pop();
        QY.pop();
        for (int i = -2; i <= 2; i++) {
            for (int j = -2; j <= 2; j++) {
                if (abs(i) != abs(j) && i != 0 && j != 0 && basex + i >= 1 && basex + i <= n && basey + j >= 1 && basey + j <= m && !flog[basex + i][basey + j]) {
                    QX.push(basex + i);
                    QY.push(basey + j);
                    flog[basex + i][basey + j] = 1;
                    point[basex + i][basey + j] = point[basex][basey] + 1; 
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!flog[i][j]) printf("%-5d", -1);
            else printf("%-5d", point[i][j]);
        }
        printf("\n");
    }
    return 0;
}
