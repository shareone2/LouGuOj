/*************************************************************************
	> File Name: 1048采药.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月16日 星期二 15时01分13秒
 ************************************************************************/

#include <iostream>
using namespace std;
int t, m, timed[105], value[105], dp[105][1005];
int solve(int i, int j);
int main() {
    cin >> t >> m;
    for (int i = 0; i < m; i++) { cin >> timed[i] >> value[i]; }
    for (int i = m - 1; i >= 0; i--) {
        for (int j = t; j >= 0; j--) {
            if (j < timed[i]) { dp[i][j] = dp[i + 1][j]; }
            else { dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - timed[i]] + value[i]); }
        }
    }
    cout << dp[0][t] << endl;
    return 0;
}
