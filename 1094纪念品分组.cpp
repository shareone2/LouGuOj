/*************************************************************************
	> File Name: 1094纪念品分组.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月23日 星期四 19时53分40秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int read();
int w, n, base_num;
vector <int> num;
int main() {
    w = read(), n = read();
    for (int i = 0; i < n; i++) {
        base_num = read();
        num.push_back(base_num);
    }
    sort(num.begin(), num.end());
    int l = 0, r = n - 1, ans = 0;
    while (l <= r) {
        if (num[l] + num[r] <= w) {
            l++;
            r--;
            ans++;
        } else {
            r--;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
int read(){
    int x = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') ch = getchar();
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x;
}

