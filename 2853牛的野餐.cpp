/*************************************************************************
	> File Name: 2853牛的野餐.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月09日 星期四 08时44分15秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void DFS(int a);
vector <int> A[10005];
int k, n, m, cow[105], vis[1005], point[1005], ans;
int main () {
    cin >> k >> n >> m;
    for (int i = 1; i <= k; i++) cin >> cow[i];
    int base_a, base_b;
    for (int i = 1; i <= m; i++) {
        cin >> base_a >> base_b;
        A[base_a].push_back(base_b);
    }
    for (int i = 1; i <= k; i++) {
        DFS(cow[i]);
        memset(vis, 0, sizeof(vis));
    }
    cout << ans << endl;
    return 0;
}

void DFS(int a) {
    vis[a] = 1;
    point[a]++;
    if (point[a] == k) ans++;
    for (int i = 0; i < A[a].size(); i++) {
        if (!vis[A[a][i]]) DFS(A[a][i]);
    }
    return ;
} 
