/*************************************************************************
	> File Name: 1025数的划分.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月21日 星期二 18时44分00秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int Quick_getin();
void dfs(int a, int sum, int times);
int n, k, cnt;
int main() {
    n = Quick_getin();
    k = Quick_getin();
    dfs(1, 0, 0);
    printf("%d\n", cnt);
    return 0;
}
void dfs(int a, int sum, int times) {
    if (times == k) {
        if (sum == n) cnt++;
        return ;
    }
    for (int i = a; i + sum <= n; i++) {
        dfs(i, sum + i, times + 1);
    }
    return ;
}
int Quick_getin() {
    int x = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') ch = getchar();
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x;
}
