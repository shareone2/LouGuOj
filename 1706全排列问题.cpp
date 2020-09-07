/*************************************************************************
	> File Name: 1706全排列问题.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月05日 星期日 19时44分30秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
void dfs(int cnt);
int n, num[15], flognum[15], ansnum[15];
int main () {
    cin >> n;
    for (int i = 1; i <= n; i++) num[i] = i;
    dfs(0);
    return 0;
}

void dfs(int cnt) {
    if (cnt == n) {
        for (int i = 1; i <= n; i++) {
            printf("%5d", ansnum[i]);
        }
        cout << endl;
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (flognum[i]) continue;
        cnt++;
        ansnum[cnt] = i;
        flognum[i] = 1;
        dfs(cnt);
        flognum[i] = 0;
        ansnum[cnt] = 0;
        cnt--;
    }
    return ;
}
