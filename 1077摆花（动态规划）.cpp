/*************************************************************************
	> File Name: 1077摆花（动态规划）.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月30日 星期六 13时03分56秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#define ss 1000007
using namespace std;
int n, m, num[105], ans[105];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) { cin >> num[i]; }
    for (int i = 0; i <= num[1]; i++) { ans[i] = 1; }
    for (int i = 2; i <= n; i++) {
        for (int j = m; j >= 1; j--) {
            for (int k = min(num[i], j); k >= 1; k--) {
                ans[j] = (ans[j] + ans[j - k]) % ss;
            }
        }
    }
    cout << ans[m] << endl;
    return 0;
}
