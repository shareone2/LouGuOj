/*************************************************************************
	> File Name: 1583魔法照片.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月28日 星期二 17时42分57秒
 ************************************************************************/

#include <iostream>
#include <cstdio> 
#include <algorithm>
using namespace std;
class people {
    public:
        int di, wi;
};
people base_people[20005];
int n, k, E[15];
int read();
bool cmp(people x, people y) { return x.wi != y.wi ? x.wi > y.wi : x.di < y.di; }
int main() {
    n = read(), k = read();
    for (int i = 1; i <= 10; i++) { E[i] = read(); }
    for (int i = 1; i <= n; i++) { 
        base_people[i].wi = read();
        base_people[i].di = i;
    }
    sort(base_people + 1, base_people + n + 1, cmp);
    for (int i = 1; i <= n; i++) { base_people[i].wi += E[(i - 1) % 10 + 1]; }
    sort(base_people + 1, base_people + n + 1, cmp);
    for (int i = 1; i <= k; i++) { printf("%d ", base_people[i].di); }
    printf("\n");
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
