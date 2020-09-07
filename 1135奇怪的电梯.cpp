/*************************************************************************
	> File Name: 1135奇怪的电梯.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月23日 星期四 19时59分09秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;
#define MAX 205
int n, a, b;
class obj {
    public:
        int num, cnt, color;
};
obj obj1[MAX];
queue <int> point;
int main() {
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        cin >> obj1[i].num;
    }
    if (a == b) {
        cout << 0 << endl;
        return 0;
    }
    point.push(a);
    obj1[a].color = 1;
    while (!point.empty()) {
        int x = point.front();
        if (x + obj1[x].num <= n && !obj1[x + obj1[x].num].color) {
            obj1[x + obj1[x].num].cnt = obj1[x].cnt + 1;
            if (x + obj1[x].num == b) {
                cout << obj1[x + obj1[x].num].cnt << endl;
                return 0;
            }
            obj1[x + obj1[x].num].color = 1;
            point.push(x + obj1[x].num);
        }
        if (x - obj1[x].num >= 1 && !obj1[x - obj1[x].num].color) {
            obj1[x - obj1[x].num].cnt = obj1[x].cnt + 1;
            if (x - obj1[x].num == b) {
                cout << obj1[x - obj1[x].num].cnt << endl;
                return 0;
            }
            obj1[x - obj1[x].num].color = 1;
            point.push(x - obj1[x].num);
        }
        point.pop();
    }
    cout << -1 << endl;
    return 0;
}

