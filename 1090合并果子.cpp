/*************************************************************************
	> File Name: 1090合并果子.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月22日 星期三 18时50分09秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
priority_queue <int, vector <int>, greater <int> > num;
int n, obj, sum, base;
int Quick_read();
int main() {
    n = Quick_read();
    for (int i = 1; i <= n; i++) {
        obj = Quick_read();
        num.push(obj);
    }
    while (true) {
        base = 0;
        base += num.top();
        num.pop();
        base += num.top();
        num.pop();
        sum += base;
        if (num.empty()) break;
        num.push(base);
    }
    cout << sum << endl;
    return 0;
}

int Quick_read() {
    int x = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') ch = getchar();
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x;
}
