/*************************************************************************
	> File Name: 1088火星人.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月24日 星期四 19时17分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int n, m, num[10008];
void solve();
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) { cin >> num[i]; }
    solve();
    for (int i = 1; i <= n; i++) { cout << num[i] << ' '; }
    cout << endl;
    return 0;
}
void solve() {
    int j, k;
    for (int i = 1; i <= m; i++) {
        for (j = n - 1; j >= 1; j--) {
            if (num[j] < num[j + 1]) { break; }
        }
        for (k = n; k >= 1; k--) {
            if (num[k] > num[j]) { break; }
        }
        int base = num[j];
        num[j] = num[k];
        num[k] = base;
        sort(num + j + 1, num + n + 1);
    }
    return ;
}
