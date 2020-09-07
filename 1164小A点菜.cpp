/*************************************************************************
	> File Name: 1164小A点菜.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月19日 星期四 19时53分40秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n, m, a[105], flog[105][10005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j > a[i]) { flog[i][j] = flog[i - 1][j - a[i]] + flog[i - 1][j]; }
            if (j == a[i]) { flog[i][j] = flog[i - 1][j] + 1; }
            if (j < a[i]) { flog[i][j] = flog[i - 1][j]; }
        }
    }
    cout << flog[n][m] << endl;
    return 0;
}
