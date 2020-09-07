/*************************************************************************
	> File Name: 1546最短网络.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月22日 星期六 12时26分46秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;
class edge {
    public:
        int from, to, cost;
    bool operator < (const edge & x) const { return x.cost < cost; }
};
edge E;
priority_queue <edge> G;
int n, V[105], sum = 0;
int find(int x) { return V[x] == x ? x : (V[x] = find(V[x])); } 
int main() {
    cin >> n;
    for (int i = 0; i <= n; i++) { V[i] = i; }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> E.cost;
            if (i < j) {
                E.from = i, E.to = j;
                G.push(E); 
            }
        }
    }
    while (n != 1) {
        edge t = G.top();
        G.pop();
        if (find(V[t.from]) != find(V[t.to])) {
            n--;
            sum += t.cost;
            V[find(V[t.to])] = find(V[t.from]);
        }
    }
    cout << sum << endl;
    return 0;
}
