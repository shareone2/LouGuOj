/*************************************************************************
	> File Name: 1331FunctionRunFun.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月25日 星期四 19时31分16秒
 ************************************************************************/

#include <iostream>

using namespace std;

long long dp[25][25][25];

long long w(long long a, long long b, long long c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    if (dp[a][b][c] != 0) return dp[a][b][c];
    if (a < b && b < c) return dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    return dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1); 
}

int main () {
    long long a, b, c;
    while (cin >> a >> b >> c && (a != -1 || b != -1 || c != -1)) {
        cout << "w(" << a <<',' << ' ' << b << ',' << ' ' << c << ") " << "= " << w(a, b, c) << endl;
    }
    return 0;
}
