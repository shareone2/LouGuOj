/***********************************************************************
	> File Name: 1223排队接水.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月19日 星期五 19时08分05秒
 ************************************************************************/

#include <stdio.h>

long long sum, ans;

struct people {
    long long flog, time;
};

int main () {
    int n;
    scanf("%d", &n);
    people p[1005];
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &p[i].time);
        p[i].flog = i;
    }
    int lastswap;
    people cmp;
    for (int j = n; j > 1; j = lastswap) {
        lastswap = 1;
        for (int i = 1; i < j; i++) {
            if (p[i].time > p[i + 1].time) {
                cmp = p[i];
                p[i] = p[i + 1];
                p[i + 1] = cmp;
                lastswap = i;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        printf("%lld ", p[i].flog);
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        ans += p[i].time * (n - i);
    }
    printf("%.2f\n", (double)ans / n);
    return 0;
}
