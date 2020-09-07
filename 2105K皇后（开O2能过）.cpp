/*************************************************************************
	> File Name: 2105K皇后.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月04日 星期六 12时47分50秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n, m, k, pointx, pointy, vis1[20005], vis2[20005], vis3[40005], vis4[40005], maxd;
long long cnt;
int main () {
    cin >> n >> m >> k;
    if (n > m) maxd = n;
    else maxd = m;
    for (int i = 1; i <= k; i++) {
        cin >> pointx >> pointy;
        vis1[pointx] = 1;
        vis2[pointy] = 1;
        vis3[pointx + pointy] = 1;
        vis4[pointy - pointx + maxd] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (vis1[i]) continue;
        for (int j = 1; j <= m; j++) {
            if (!vis2[j] && !vis3[i + j] && !vis4[j - i + maxd]) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
