/*************************************************************************
	> File Name: 1807最长路（Bellman-Ford）.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月21日 星期五 19时20分12秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
class edge {
    public:
        int from, to, cost;
};
edge es[50005];
int d[2000], V, E;
int main() {
    cin >> V >> E;
    fill(d, d + V, 2147000000);
    for (int i = 1; i <= E; i++) { cin >> es[i].from >> es[i].to >> es[i].cost; }
    for (int i = 1; i <= E; i++) { es[i].cost = -1 * es[i].cost; }
    d[1] = 0;
    while (true) {
        bool update = false;
        for (int i = 1; i <= E; i++) {
            edge e = es[i];
            if (d[e.from] != 2147000000 && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if (!update) { break; }   
    }
    if (E == 0 || V - 1 > E) { cout << -1 << endl; }
    else { cout << -1 * d[V] << endl;}
    return 0;
}
