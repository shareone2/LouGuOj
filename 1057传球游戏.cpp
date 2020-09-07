/*************************************************************************
	> File Name: 1057传球游戏.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月19日 星期五 14时01分28秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
int n, m, dp[35][35];
int solve(int i, int cnt);
int left(int l);
int rightd(int r);
int main() {
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    cout << solve(1, m) << endl;
    return 0;
}
int solve(int i, int cnt) {
    if (dp[i][cnt] >= 0) { return dp[i][cnt]; }
    else if (i == 1 && cnt == 0) { return 1; }
    else if (i != 1 && cnt == 0) { return 0; }
    return dp[i][cnt] = solve(left(i), cnt - 1) + solve(rightd(i), cnt - 1);

}
int left(int l) { return l == n ? 1 : l + 1; }
int rightd(int r) { return r == 1 ? n : r - 1; }
