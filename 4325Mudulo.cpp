/*************************************************************************
	> File Name: 4325Mudulo.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月21日 星期一 19时59分45秒
 ************************************************************************/

#include <stdio.h>
int x, num[43], ans;
int main() {
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &x);
        if (!num[x % 42]) { 
            ans++;
            num[x % 42] = 1; 
        }
    }
    printf("%d\n", ans);
    return 0;
}
