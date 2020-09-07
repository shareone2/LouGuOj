/*************************************************************************
	> File Name: AT173.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月07日 星期六 20时43分47秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int n, k;
int main() {
    while (cin >> n >> k && (n != 0 || k != 0)) {
        int a[200], sum = 0;
        for (int i = 1; i <= n; i++) { cin >> a[i]; }
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= k; i++) { sum += a[i]; }
        cout << sum << endl;
    }
    
    return 0;
}
