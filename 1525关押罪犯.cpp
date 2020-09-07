/*************************************************************************
	> File Name: 1525关押罪犯.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月23日 星期四 19时54分16秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct base {
    int v, a, b;
};
base base_num[100015];
int num[40015];
int n, m;
int read();
int find(int x) { return num[x] == x ? x : (num[x] = find(num[x])); }
bool cmp(base x, base y) { return x.v > y.v; }
int main() {
    n = read(), m = read();
    for (int i = 1; i <= n; i++) {
        num[i] = i;
        num[i + n] = i + n;
    }
    for (int i = 0; i < m; i++) {
        base_num[i].a = read();
        base_num[i].b = read();
        base_num[i].v = read();
    }
    sort(base_num, base_num + m, cmp);
    for (int i = 0; i < m; i++) {
        if (find(base_num[i].a) == find(base_num[i].b) || find(base_num[i].a + n) == find(base_num[i].b + n)) {
            cout << base_num[i].v << endl;
            return 0;
        }
        num[find(base_num[i].a)] = find(base_num[i].b + n);
        num[find(base_num[i].a + n)] = find(base_num[i].b);
    }
    cout << 0 << endl;
    return 0;
}
int read() {
    int x = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') ch = getchar();
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x;
}

