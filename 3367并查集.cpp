/*************************************************************************
	> File Name: 3367并查集.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月18日 星期六 08时14分45秒
 ************************************************************************/

#include <iostream>
using namespace std;
int num[10005], n, m, zi, xi, yi;
int find(int x) {
    return num[x] == x ? x : (num[x] = find(num[x]));
}
int main () {
    cin >> n >> m;
    for (int i = 0; i <= n; i++) num[i] = i;
    for (int i = 1; i <= m; i++) {
        cin >> zi >> xi >> yi;
        if (zi == 1) num[find(xi)] = find(yi);
        else {
            if (find(xi) == find(yi)) cout << "Y" << endl;
            else cout << "N" << endl;
        }
    }
    return 0;
}
