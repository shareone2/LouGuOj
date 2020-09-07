/*************************************************************************
	> File Name: UVA10714Ants.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月07日 星期日 10时07分32秒
 ************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int l, n, x, mint = 0, maxt = 0;
        cin >> l >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mint = max(mint, min(x, l - x));
            maxt = max(maxt, max(x, l - x));
        }
        cout << mint << ' ' << maxt << endl;
    }
    return 0;
}
