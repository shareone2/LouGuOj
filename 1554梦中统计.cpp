/*************************************************************************
	> File Name: 1554梦中统计.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月21日 星期一 17时19分52秒
 ************************************************************************/

#include <stdio.h>
int m, n, num[14];
int main() {
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++) {
        for (int base = i; base; base /= 10) {
            num[base % 10]++;
        }
    }
    for (int i = 0; i <= 9; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
