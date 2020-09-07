/*************************************************************************
	> File Name: 3366最小生成树.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月31日 星期五 20时11分11秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_V 5010
#define MAX_E 200010
struct edge { int u, v, cost; };
edge es[MAX_E];
int res, V, E, point[MAX_V];
bool cmp(edge a, edge b) { return a.cost < b.cost; }
int find(int x) { return point[x] == x ? x : (point[x] = find(point[x])); }
int main () {
    cin >> V >> E;
    for (int i = 0; i <= V; i++) { point[i] = i; }
    for (int i = 1; i <= E; i++) { cin >> es[i].u >> es[i].v >> es[i].cost; }
    sort (es + 1, es + E + 1, cmp);
    for (int i = 1; i <= E; i++) {
        edge e = es[i];
        if (find(e.u) != find(e.v)) {
            V--;
            point[find(e.u)] = find(e.v);
            res += e.cost;
            if (V == 1) {
                cout << res << endl;
                return 0;
            }
        }
    }
    cout << "orz" << endl;
    return 0;
}
