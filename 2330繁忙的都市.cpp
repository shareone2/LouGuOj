#include <iostream>
#include <algorithm>
using namespace std;
class G {
	public:
		int u, v, c;
};
G E[100005];
int n, m, V[10005], base;
bool cmp(G x, G y) { return x.c < y.c; }
int find(int x) { return V[x] == x ? x : (V[x] = find(V[x])); }
int main() {
	cin >> n >> m;
	base = n;
	for (int i = 0; i <= n; i++) { V[i] = i; }
	for (int i = 0; i < m; i++) { cin >> E[i].u >> E[i].v >> E[i].c; }
	sort(E, E + m, cmp);
	int i;
	for (i = 0; i < m; i++) {
		if (find(E[i].u) != find(E[i].v)) {
			V[find(E[i].u)] = find(E[i].v);
			n--;
			if (n == 1) {
		        cout << base - 1 << ' ' << E[i].c << endl;
		        return 0;
			}
		}
	}
	cout << n << ' ' << E[i].c << endl;
	return 0;
}
