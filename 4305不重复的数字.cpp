/*************************************************************************
	> File Name: 4305不重复的数字.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月17日 星期五 20时16分41秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
bool vis[40000015];
int t, n, num;
int main() {
    scanf("%d", &t);
    while (t--) {
        memset(vis, 0, sizeof(vis));
        scanf("%d", &n);
        for(int j = 1;j <= n;j++) {
            scanf("%d", &num);
            if(!vis[num]) {
                vis[num] = 1;
                printf("%d ", num);
            }
        }
        printf("\n");
    }
    return 0;
}

