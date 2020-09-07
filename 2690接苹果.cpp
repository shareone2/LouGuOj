/*************************************************************************
	> File Name: 2690接苹果.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月18日 星期四 09时03分32秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int t, w, a[1005], dp[1005][3][35];
int solve(int timed, int location, int x);
int main() {
    cin >> t >> w;
    for (int i = 1; i <= t; i++) { cin >> a[i]; }
    memset(dp, -1, sizeof(dp));
    cout << solve(1, 1, w) << endl;
    return 0;
}
int solve(int timed, int location, int x) {
    if (timed > t) { return 0; }
    else if (dp[timed][location][x] >= 0) { return dp[timed][location][x]; }
    return dp[timed][location][x] = max((x > 0 ? solve(timed + 1, location * -1 + 3, x - 1) + (a[timed] == location * -1 + 3 ? 1 : 0) : 0), solve(timed + 1, location, x) + (a[timed] == location ? 1 : 0));
} 
