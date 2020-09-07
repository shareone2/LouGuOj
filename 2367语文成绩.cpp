/*************************************************************************
	> File Name: 2367语文成绩.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月02日 星期一 16时59分30秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int people[5000009], n, p;
int read();
int main() {
    n = read();
    p = read();
    for (int i = 1; i <= n; i++) { people[i] = read(); }
    for (int i = n; i >= 2; i--) { people[i] = people[i] - people[i - 1]; }
    for (int i = p; i > 0; i--) {
        int x = read(), y = read(), z = read();
        people[x] += z;
        people[y + 1] -= z;
    }
    int ss = people[1];
    for (int i = 2; i <= n; i++) {
        people[i] = people[i] + people[i - 1];
        if (people[i] < ss) { ss = people[i]; }
    }
    printf("%d\n", ss);
    return 0;
}
int read() {
    int ans = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') { ch = getchar(); }
    while (ch >= '0' && ch <= '9') {
        ans = ans * 10 + (ch - 48);
        ch = getchar();
    }
    return ans;
}
