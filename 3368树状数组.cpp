/*************************************************************************
	> File Name: 3368树状数组.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月04日 星期三 11时07分23秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int n, m, num[500005], tree[500005], a, x, y, k;
void addd(int s, int z);
int ss(int s);
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) { scanf("%d", &num[i]); }
    for (int i = 1; i <= m; i++) {
        scanf("%d", &a);
        if (a == 1) {
            scanf("%d%d%d", &x, &y, &k);
            addd(x, k);
            addd(y + 1, -k);
        } else {
            scanf("%d", &x);
            printf("%d\n", ss(x) + num[x]);
        }
    }
    return 0;
}
void addd(int s, int z) {
    for (int i = s; i <= n; i += (i & -i)) {
        tree[i] += z;
    }
    return ;
}
int ss(int s) {
    int sum = 0;
    for (int i = s; i >= 1; i -= (i & -i)) {
        sum += tree[i];
    }
    return sum;
}
