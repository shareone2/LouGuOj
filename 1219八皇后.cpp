/*************************************************************************
	> File Name: 1219八皇后.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月01日 星期三 16时29分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
void dfs(int cur);
int n, vis[4][25], c[20], tot;
int main () {
    cin >> n;
    dfs(0);
    cout << tot << endl;
    return 0;
}
void dfs(int cur) {
    if (cur == n) {
        tot++;
        if (tot <= 3) {
            for (int i = 0; i < n; i++) {
                if (i == 0) cout << c[i] + 1;
                else cout << ' ' << c[i] + 1;
            }
            cout << endl;
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (!vis[0][i] && !vis[1][cur + i] && !vis[2][cur - i + n]) {
                c[cur] = i;
                vis[0][i] = vis[1][cur + i] = vis[2][cur - i + n] = 1;
                dfs(cur + 1);
                vis[0][i] = vis[1][cur + i] = vis[2][cur - i + n] = 0;
            }
        }
    }
}

