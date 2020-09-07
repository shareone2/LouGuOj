/*************************************************************************
	> File Name: 1138第K小整数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 22时43分21秒
 ************************************************************************/

#include <iostream>
#include <set>
using namespace std;
int main () {
    set <int> S;
    int n, k, num, cnt = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        S.insert(num);
    }
    for (set <int> :: iterator it = S.begin(); it != S.end(); it++) {
        cnt++;
        if (cnt == k) {
            cout << *it << endl;
            break;
        }   
    }
    if (cnt < k) cout << "NO RESULT" << endl;
    return 0;
}
