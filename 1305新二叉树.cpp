/*************************************************************************
	> File Name: 1305新二叉树.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月28日 星期五 18时49分09秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n, point[30];
char tree[100], a, b, c;
void dfs(int x);
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b >> c;
        if (i == 1) { 
            point[a - 95] = 1;
            tree[1] = a;
        }
        point[b - 95] = point[a - 95] * 2;
        tree[point[b - 95]] = b;
        point[c - 95] = point[a - 95] * 2 + 1;
        tree[point[c - 95]] = c;        
    }
    dfs(1);
    cout << endl;
    return 0;
}
void dfs(int x) {
    if (tree[x] != '*') {
        cout << tree[x];
        dfs(x * 2);
        dfs(x * 2 + 1);
    }
    return ;
}
