/*************************************************************************
	> File Name: 2024食物链.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月21日 星期二 19时42分04秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
#define MAX 50015
int n, k, par[MAX * 3], base_a, base_b, judge, ans;
int Quick_getin();
int find(int x) { return par[x] == x ? x : (par[x] = find(par[x])); }
int main() {
    n = Quick_getin(), k = Quick_getin();
    for (int i = 0; i <= 3 * n; i++) par[i] = i;
    for (int i = 1; i <= k; i++) {
        judge = Quick_getin(), base_a = Quick_getin(), base_b = Quick_getin();
        if (base_a < 1 || base_a > n || base_b < 1 || base_b > n) { ans++; continue; }
        if (judge == 1) {
            if (find(base_a) == find(base_b + n) || find(base_a) == find(base_b + 2 * n)) ans++;
            else {
                par[find(base_a)] = find(base_b);
                par[find(base_a + n)] = find(base_b + n);
                par[find(base_a + 2 * n)] = find(base_b + 2 * n);
            }
        } 
        if (judge == 2) {
            if (find(base_a) == find(base_b) || find(base_a) == find(base_b + 2 * n)) ans++;
            else {
                par[find(base_b + n)] = find(base_a);
                par[find(base_b + 2 * n)] = find(base_a + n);
                par[find(base_b)] = find(base_a + 2 * n);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
int Quick_getin() {
    int x = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') ch = getchar();
    while (ch >= '0' && ch <='9') {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x;
}
