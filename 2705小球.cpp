/*************************************************************************
	> File Name: 2705小球.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月21日 星期一 20时18分04秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int r, b, c, d, e, ans;
int main() {
    cin >> r >> b >> c >> d >> e;
    ans = r * c + b * d;
    ans = max(ans, r == b ? (r + b) * e : (r > b ? b * 2 * e + (r - b) * c : r * 2 * e + (b - r) * d));
    cout << ans << endl;
    return 0;
}
