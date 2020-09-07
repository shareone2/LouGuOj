/*************************************************************************
	> File Name: 1049装箱问题.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月18日 星期四 13时47分13秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int v, n, num[35], dp[35][20005];
int solve(int i, int j);
int main() {
    cin >> v >> n;
    for (int i = 1; i <= n; i++) { cin >> num[i]; }
    memset(dp, -1, sizeof(dp));
    cout << v - solve(1, v) << endl;
    return 0;
}
int solve(int i, int j) {
    if (i > n) { return 0; }
    else if (dp[i][j] >= 0) { return dp[i][j]; }
    else if (j < num[i]) { return dp[i][j] = solve(i + 1, j); }
    else { return dp[i][j] = max(solve(i + 1, j), solve(i + 1, j - num[i]) + num[i]); }    
}
