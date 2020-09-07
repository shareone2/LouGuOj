/*************************************************************************
	> File Name: 2141珠心算测验.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月24日 星期三 13时28分30秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n, m[105], flog[20005], ans;
int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        flog[m[i]] = 1;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (flog[m[i] + m[j]]) {
                ans++;
                flog[m[i] + m[j]] = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
