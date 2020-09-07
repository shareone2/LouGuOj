#include <iostream>
#include <cstring>
using namespace std;
int n, m, G[1005];
int find(int x) { return G[x] == x ? x : (G[x] = find(G[x])); }
int main() {
	while (cin >> n >> m && n != 0) {
		memset(G, 0, sizeof(G));
		for (int i = 0; i <= n; i++) {G[i] = i;}
		int a, b;
		for (int i = 1; i <= m; i++) {
			cin >> a >> b;
			if (find(a) != find(b)) {
				n--;
				G[find(a)] = find(b);
			}
		}
		cout << n - 1 << endl;
	}
	return 0;
}
