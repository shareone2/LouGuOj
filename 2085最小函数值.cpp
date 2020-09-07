/*************************************************************************
	> File Name: 2085最小函数值.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月20日 星期四 18时54分07秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;
class num {
    public:
        int a, b, c, x, y, s;
        bool operator < (const num & e) const { return e.y < y; }
};
num flog[10005];
priority_queue <num> que;
int n, m;
int main() {
    cin >> n >> m;
    while (n--) {
        flog[n].s = n;
        cin >> flog[n].a >> flog[n].b >> flog[n].c;
        flog[n].x = 1;
        flog[n].y = flog[n].a * flog[n].x * flog[n].x + flog[n].b * flog[n].x + flog[n].c;
        que.push(flog[n]);
    }
    while (m--) {
        num t = que.top();
        que.pop();
        cout << t.y << ' ';
        flog[t.s].x++;
        flog[t.s].y = flog[t.s].a * flog[t.s].x * flog[t.s].x + flog[t.s].b * flog[t.s].x + flog[t.s].c;
        que.push(flog[t.s]);
    }
    cout << endl;
    return 0;
}
