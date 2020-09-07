/*************************************************************************
	> File Name: 1012拼数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月24日 星期三 17时32分08秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
string s[25];
int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    int lastswap;
    for (int i = n - 1; i > 0; i = lastswap) {
        lastswap = 0;
        for (int j = 0; j < i; j++) {
            if (s[j] + s[j + 1] > s[j + 1] + s[j]) {
                string t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
                lastswap = j;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--) cout << s[i];
    cout << endl;
    return 0;
}

