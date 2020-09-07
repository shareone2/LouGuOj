/*************************************************************************
	> File Name: 1007独木桥.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月17日 星期五 20时19分55秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int l, n, mind = 0, maxd = 0, base;
    cin >> l >> n;
    for (int i = 1; i<= n; i++) {
        cin >> base;
        mind = max(mind, min(base, l - base + 1));
        maxd = max(maxd, max(base, l - base + 1));
    }
    cout << mind << ' ' << maxd << endl;
    return 0;
}

