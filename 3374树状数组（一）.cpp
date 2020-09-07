/*************************************************************************
	> File Name: 3374树状数组.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月21日 星期日 10时10分06秒
 ************************************************************************/

#include <iostream>
using namespace std;
int num[500010], n, m, a, b, c;
void add(int i, int x);
int sum(int i);
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        add(i, a);
    }
    for (int i = 1; i <= m; i++) {
        cin >> a >> b >> c;
        if (a == 1) { add(b, c); }
        else { cout << sum(c) - sum(b - 1) << endl;}
    }   
    return 0;
}
void add(int i, int x) {
    while (i <= n) {
        num[i] += x;
        i += i & -i;
    }
    return ;
}
int sum(int i) {
    int s = 0;
    while (i > 0) {
        s += num[i];
        i -= i & -i;
    }
    return s;
}
