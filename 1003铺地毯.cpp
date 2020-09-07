/*************************************************************************
	> File Name: 1003铺地毯.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月16日 星期二 22时03分29秒
 ************************************************************************/

#include <iostream>

using namespace std;

struct di {
    int a, b, g, k;
};

int main () {
    di p[10005];
    int n, x, y, flog = -1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i].a >> p[i].b >> p[i].g >> p[i].k;
        p[i].g += p[i].a;
        p[i].k += p[i].b;
    }
    cin >> x >> y;
    for (int i = 1; i <= n; i++) {
        if (x >= p[i].a && x <= p[i].g && y >= p[i].b && y <= p[i].k) {
            flog = i;
        }
    }
    cout << flog << endl;
    return 0;
}
