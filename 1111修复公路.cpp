/*************************************************************************
	> File Name: 1111修复公路.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月19日 星期日 09时21分56秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int n, m, point[1005], base_a, base_b, base_time;
struct timed { int a, b, times; };
timed num[100005];
int find(int x) { return point[x] == x ? x : (point[x] = find(point[x])); }
bool cmp(timed a, timed b) { return a.times < b.times; }
int main() {
    cin >> n >> m;
    for (int i = 0; i <= n; i++) point[i] = i; 
    for (int i = 1; i <= m; i++) {
        cin >> base_a >> base_b >> base_time;
        num[i].a = base_a;
        num[i].b = base_b;
        num[i].times = base_time;
    }
    sort(num + 1, num + m + 1, cmp);
    for (int i = 1; i <= m; i++) {
        if (find(num[i].a) != find(num[i].b)) {
            point[find(num[i].a)] = find(num[i].b);
            n--;
        }
        if (n == 1) {
            cout << num[i].times << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
