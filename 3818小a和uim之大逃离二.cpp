#include <iostream>
#include <queue>
using namespace std;
class location {
	public:
		int x, y, magic, cnt;
};
location t;
int h, w, d, r, a[5][2] = {-1, 0, 1, 0, 0, -1, 0, 1};
char point[2010][2010];
bool vis1[2010][2010], vis2[2010][2010];
queue <location> que;
int main() {
	cin >> h >> w >> d >> r;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> point[i][j];
		}
	}
	t.x = 1, t.y = 1, t.magic = 1, t.cnt = 0;
	vis1[1][1] = 1;
	que.push(t);
	while (!que.empty()) {
		t = que.front();
        que.pop();
		if (t.x == h && t.y == w) { 
		    cout << t.cnt << endl;
		    return 0;
		}
        location base1, base2;
        base1.x = t.x + d, base1.y = t.y + r, base1.magic = 0, base1.cnt = t.cnt + 1;
		if (t.magic == 1 && base1.x >= 1 && base1.y >= 1 && !vis1[base1.x][base1.x] &&!vis2[base1.x][base1.y] && point[base1.x][base1.y] == '.') { 
            vis2[base1.x][base1.y] = 1;
            que.push(base1); 
        }
		for (int i = 0; i < 4; i++) {
			base2.x = t.x + a[i][0], base2.y = t.y + a[i][1], base2.magic = t.magic, base2.cnt = t.cnt + 1; 
		    if (t.magic == 0 && base2.x >= 1 && base2.y >= 1 && !vis1[base2.x][base2.y] && !vis2[base2.x][base2.y] && point[base2.x][base2.y] == '.') {
                vis2[base2.x][base2.y] = 1;
                que.push(base2); 
            } else if (t.magic == 1 && base2.x >= 1 && base2.y >= 1 && !vis1[base2.x][base2.y] && point[base2.x][base2.y] == '.') {
                vis1[base2.x][base2.y] = 1;
                que.push(base2);
            }
		}
	}
	cout << -1 << endl;
	return 0;
}
