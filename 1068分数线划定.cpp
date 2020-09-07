/************************************************************************
	> File Name: 1068分数线划定.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月18日 星期四 18时29分44秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

struct people {
    int k[5005], cnt;
};

int main () {
    people s[105];
    memset(s, 0, sizeof(s));
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int ren, fen;
        cin >> ren >> fen;
        s[fen].cnt++;
        s[fen].k[s[fen].cnt] = ren;
    }
    m = floor(m * 1.5);
    int flogren = m, t = 100;
    while (flogren > 0) {
        flogren -= s[t].cnt;
        if (flogren == 0) break;
        if (flogren < 0) {
            m += (-1 * flogren);
            break;
        }
        t--;
    }
    cout << t << ' ' << m << endl;
    for (int i = 100; i >= 0; i--) {
        if (s[i].cnt > 0 && m > 0){
            sort(s[i].k + 1, s[i].k + s[i].cnt + 1);
            for (int j = 1; j <= s[i].cnt; j++) {
                cout << s[i].k[j] << ' ' << i << endl;
                m--;
            }
        } else if (m <= 0) break;
    }
    return 0;
}
