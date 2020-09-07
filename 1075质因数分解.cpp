/*************************************************************************
	> File Name: 1075质因数分解.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 21时05分49秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main () {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= floor(sqrt(n) + 0.5); i++) {
        if (!(n % i)) {
            printf("%d\n", n / i);
            return 0;
        } 
    }
    return 0;
}
