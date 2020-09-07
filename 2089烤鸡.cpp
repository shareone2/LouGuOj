/*************************************************************************
	> File Name: 2089烤鸡.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 08时27分46秒
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
int n, num[15], sum, ans;
vector <int> hanke;
void dfs(int cnt);
int main() {
    cin >> n;
    if (n >= 10 && n <= 30) dfs(0);
    cout << ans << endl;
    if (n >= 10 && n <= 30) {
        for (int i = 0; hanke[i] != 0; i++) {
            cout << hanke[i] << ' ';
            if (i % 10 == 9) cout << endl;
        }
    }
    return 0;
}
void dfs(int cnt) {
    if (cnt == 10) {
        if (sum == n) {
            for (int i = 0; i < 10; i++) { hanke.push_back(num[i]); }
            ans++;
        }
        return ;
    }
    for (int i = 1; i <= 3; i++) {
        num[cnt++] = i;
        sum += i;
        if (sum <= n) dfs(cnt);
        sum -= i;
        num[cnt--] = 0;
    }
    return ;
}

