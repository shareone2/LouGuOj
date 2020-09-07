/*************************************************************************
	> File Name: 1433吃奶酪.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月28日 星期日 21时18分52秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstdio>
#include <cfloat>

using namespace std;

#define MAX_SIZE 20

struct node {
    double x, y;
} p[MAX_SIZE];

double ans = DBL_MAX, length[MAX_SIZE][MAX_SIZE];
int n, flog[MAX_SIZE];
void dfs(int cnt, double sum, int location);

int main () {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i].x >> p[i].y;
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            length[i][j] = sqrt(pow(p[i].x - p[j].x, 2) + pow(p[i].y - p[j].y, 2));
        }
    }
    dfs(0, 0.0, 0);
    printf("%.2f\n", ans);
    return 0;
}

void dfs(int cnt, double sum, int location) {
    if (sum > ans) return ;
    if (cnt == n) {
        ans = sum;
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if(flog[i] == 1) continue;
        flog[i] = 1;
        dfs(cnt + 1, sum + length[location][i], i);
        flog[i] = 0;
    }
    return ;
}

