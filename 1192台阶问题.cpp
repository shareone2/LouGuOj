/************************************************************************
	> File Name: 1192台阶问题.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月03日 星期二 20时28分02秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n, k, num[100005];
int dfs(int y);
int main () {
    num[0] = 1, num[1] = 1;
    cin >> n >> k;
    cout << dfs(n) % 100003 << endl;
    return 0;
}
int dfs(int y) {
    int sum = 0;
    if (num[y]) { return num[y] % 100003; }
    for (int i = 1; i <= k; i++) {
        if (y - i >= 0) {
            num[y - i] = dfs(y - i);
            sum += num[y - i];
        }
    }
    return sum % 100003;
}
