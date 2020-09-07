/*************************************************************************
	> File Name: 1657选书.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月16日 星期一 18时53分30秒
 ************************************************************************/

#include <iostream>
using namespace std;
int x, flog[30], people[30][2], ans, cnt;
void dfs(int a);
int main() {
    cin >> x;
    for (int i = 1; i <= x; i++) { cin >> people[i][0] >> people[i][1]; }
    dfs(1);
    cout << ans << endl;
    return 0;
}
void dfs(int a) {
    if (cnt == x && x != 0) {
        ans++;
        return ;
    }
    for (int i = 0; i <= 1; i++) {
        if (!flog[people[a][i]] && a <= x) { 
            flog[people[a][i]] = a;
            cnt++;
            dfs(a + 1);
            cnt--;
            flog[people[a][i]] = 0;
        }
    }
    return ;
}
