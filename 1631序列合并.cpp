/*************************************************************************
	> File Name: 1631序列合并.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月02日 星期日 14时37分03秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;
class P { 
    public:
        int a, b, sum;
        bool operator <(const P x) const { return sum > x.sum; }
};
P p;
priority_queue <P> que;
int n, num1[100005], num2[100005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) { cin >> num1[i]; }
    for (int i = 1; i <= n; i++) {
        cin >> num2[i];
        p.a = 1;
        p.b = i;
        p.sum = num1[1] + num2[i];
        que.push(p);
    }
    while (n--) {
        cout << que.top().sum << ' ';
        p.a = que.top().a + 1;
        p.b = que.top().b;
        p.sum = num1[p.a] + num2[p.b];
        que.pop();
        que.push(p);
    }
    cout << endl;
    return 0;
}
