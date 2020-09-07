/*************************************************************************
	> File Name: 1747好奇怪的游戏.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月20日 星期四 20时08分35秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
class point {
    public:
        int a, b, t;
};
point S1, S2;
int BFS(point X);
bool vis[1000][1000];
int num_hang[] = {-1, -2, -2, -2, -2, -1, 1, 2, 2, 2, 2, 1};
int num_lie[] = {-2, -2, -1, 1, -2, 2, 2, 2, 1, -1, -2, -2};
int main() {
    cin >> S1.a >> S1.b >> S2.a >> S2.b;
    S1.t = 0, S2.t = 0;
    cout << BFS(S1) << endl << BFS(S2) << endl;
    return 0;
}
int BFS(point X) {
    if (X.a == 1 && X.b == 1) { return X.t; }
    queue <point> que;
    que.push(X);
    vis[X.a][X.b] = true;
    while (!que.empty()) {
        point z = que.front();
        que.pop();
        for (int i = 0; i < 12; i++) {
            point e;
            e.a = z.a + num_hang[i];
            e.b = z.b + num_lie[i];
            e.t = z.t + 1;
            if (e.a >= 1 && e.b >= 1 && !vis[e.a][e.b]) { 
                if (e.a == 1 && e.b == 1) { 
                    memset(vis, 0, sizeof(vis));
                    return e.t; 
                }
                que.push(e);
                vis[e.a][e.b] = true;
            }
        }   
    }
    return 0;
}
