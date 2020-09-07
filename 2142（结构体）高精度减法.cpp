/*************************************************************************
	> File Name: 1303A*BProblem.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月16日 星期二 17时13分32秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
struct stu{
    string a1;
    int t;
};
int cmp(stu x, stu y) {
    if(x.a1.size() < y.a1.size()) return 1;  //从小到大排序
    else if(x.a1.size() == y.a1.size() && x.a1 < y.a1) return 1;
    return 0;
}
int a[1000001], b[1000001];
int main() {
    stu p[2];
    for(int i = 0; i < 2; i++) {
        cin >> p[i].a1;
        p[i].t = i;
    }
    if(p[0].a1 == p[1].a1) {
        cout << 0 << endl;
        return 0;
    }
    sort(p, p + 2, cmp);
    int len1 = p[1].a1.size(), len0 = p[0].a1.size(), len = len1;    //此时p[1].a1 大于 p[0].a1, len1 大于 len2
    for(int i = len1 - 1; i >= 0; i--) {
        a[len1 - i - 1] = p[1].a1[i] - '0';
    }
    for(int i = len0 - 1; i >= 0; i--) {
        b[len0 - i - 1] = p[0].a1[i] - '0';
    }
    for(int i = 0; i < len; i++) {
        if(a[i] < b[i]) {
            a[i + 1] -= 1;
            a[i] += 10;
        }
        a[i] -= b[i];
    }
    while(a[len - 1] == 0) len--;
    if(p[1].t > p[0].t) {
        cout << '-';
    }
    for(int i = len - 1; i >= 0; i--) {
        cout << a[i];
    }
    printf("\n");
    return 0;
}

