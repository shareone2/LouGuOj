/*************************************************************************
	> File Name: 1781宇宙总统.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月16日 星期二 19时48分41秒
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

struct zongtong {
    string a;
    int p;
};

int main () {
    int n;
    cin >> n;
    zongtong t, flog;
    for (int i = 1; i <= n; i++) {
        cin >> t.a;
        t.p = i;
        if ((t.a.size() == flog.a.size() &&  t.a > flog.a) || t.a.size() > flog.a.size()) {
            flog.a = t.a;
            flog.p = t.p;
        }
    }
    cout << flog.p << endl << flog.a << endl;
    return 0;
}
