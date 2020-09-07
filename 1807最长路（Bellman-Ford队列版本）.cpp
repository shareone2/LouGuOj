/*************************************************************************
	> File Name: 1807最长路（Bellman-Ford队列版本）.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月21日 星期五 20时17分33秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
#define MAX_N 2147000000
#define MAX_V 1550
using namespace std;
class edge {
    public:
        int to, cost;
};
vector <edge> G[MAX_V];
queue <int> que;
edge es;
int V, E, a, d[MAX_V], vis[MAX_V];
int read();
int main() {
    V = read(), E = read();
    fill(d, d + V, MAX_N);
    d[1] = 0;
    for (int i = 1; i <= E; i++) {
        a = read(), es.to = read(), es.cost = read();
        es.cost = -1 * es.cost;
        G[a].push_back(es);
    }
    que.push(1);
    vis[1] = 1;
    while (!que.empty() && E) {
        int x = que.front();
        que.pop();
        vis[x] = 0;
        for (int i = 0; i < G[x].size(); i++) {
            if (d[x] < MAX_N && d[G[x][i].to] > d[x] + G[x][i].cost) {
                d[G[x][i].to] = d[x] + G[x][i].cost;
                if (!vis[MAX_V]) {
                    que.push(G[x][i].to); 
                    vis[G[x][i].to] = 1;
                }   
            }
        }
    }
    if (V - 1 > E || !E) { cout << - 1 << endl; }
    else { cout << -1 * d[V] << endl; }
    return 0;
}
int read() {
    int x = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') { ch = getchar(); }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x;
}
