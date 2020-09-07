/*************************************************************************
	> File Name: 1014Cantor表.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月10日 星期三 17时17分53秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    int n, cnt = 1;
    cin >> n;
    while (n > cnt) {
        n -= cnt;
        cnt++;
    }
    int count = 0, t = 1;
    if (cnt % 2 != 0) {
        for (int i = cnt; i >= 1; i--) {
            for (int j = 1; j <= cnt; j++) {
                if (i + j == cnt + 1) count++;
                if (count == n && t == 1) { 
                    cout << i << '/' << j << endl;
                    t = 0;
                }      
            }
        }
    } else {
        for (int i = 1; i <= cnt; i++) {
            for (int j = cnt; j >= 1; j--) {
                if (i + j == cnt + 1) count++;
                if (count == n && t == 1){ 
                    cout << i << '/' << j << endl;
                    t = 0;
                }        
            }
        }
    }
    return 0;
}
