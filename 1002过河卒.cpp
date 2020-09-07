#include <iostream>

using namespace std;

long long point[23][23];
int n, m, x, y, a[10][2] = {-2, 1, -1, 2, 1, 2, 2, 1, 2, -1, 1, -2, -1, -2, -2, -1};

int main() {
	cin >> n >> m >> x >> y;
    point[0][0] = 1; //起点1种 
	point[x][y] = -1; //马以及其能一步到达的点均为-1 
	for (int i = 0; i < 8; i++) { 
        if (x + a[i][0] >= 0 && x + a[i][0] <= 20 && y + a[i][1] >= 0 && y + a[i][1] <= 20) {
            point[x + a[i][0]][y + a[i][1]] = -1; 
        }
    }
    for (int i = 0; i <= n; i++) {
    	for (int j = 0; j <= m; j++) {
    		if (point[i][j] != -1 && i - 1 >= 0 && point[i - 1][j] != -1) {
    			point[i][j] += point[i - 1][j];
			}
			if (point[i][j] != -1 && j - 1 >= 0 && point[i][j - 1] != -1) {
				point[i][j] += point[i][j - 1];
			}
		}
	}
	cout << point[n][m] << endl;
	return 0;
} 
