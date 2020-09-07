/*************************************************************************
	> File Name: 3916图的遍历.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月09日 星期四 18时42分15秒
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
#define MAX_NUMBER 100005
void DFS(int a, int a1);
vector <int> E[MAX_NUMBER];
int n, m, flog[MAX_NUMBER], ans[MAX_NUMBER];
int main () {
    cin >> n >> m;
    int base_a, base_b;
    for (int i = 1; i <= m; i++) {
        cin >> base_a >> base_b;
        E[base_b].push_back(base_a);
    }
    for (int i = n; i >= 1; i--) if (!ans[i]) DFS(i, i);
    for (int i = 1; i <= n; i++) {
        if (ans[i])cout << ans[i] << ' ';
        else cout << i << ' ';
    }
    cout << endl;
    return 0;
}
void DFS(int a, int a1) {
    flog[a] = 1;
    for (int i = 0; i < E[a].size(); i++) {
        if (a1 > E[a][i] && !flog[E[a][i]]) ans[E[a][i]] = a1;
        if (!flog[E[a][i]]) DFS(E[a][i], a1);
    }
    return ;
}

