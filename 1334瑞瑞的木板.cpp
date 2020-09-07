/*************************************************************************
	> File Name: 1334瑞瑞的木板.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月02日 星期日 10时30分28秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n, ss, a, b; 
    long long sum = 0;
    priority_queue <int, vector <int>, greater <int> > que;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> ss;
        que.push(ss);
    }
    while (que.size() > 1) {
        a = que.top();
        que.pop();
        b = que.top();
        que.pop();
        sum = sum + a + b;
        que.push(a + b);
    }
    cout << sum << endl;
    return 0;
}
