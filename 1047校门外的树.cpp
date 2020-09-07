/*************************************************************************
	> File Name: 1047校门外的树.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月25日 星期四 14时44分45秒
 ************************************************************************/

#include <iostream>
using namespace std;
int lu[10005], l, m, lift, righ, cnt;
int main () {
    cin >> l >> m;
    for (int i = 0; i <= l; i++) lu[i] = 1;
    while(m--) {
        cin >> lift >> righ;
        for (int i = lift; i <= righ; i++) {
            if (lu[i] == 1) lu[i] = 0;
        }    
    }
    for (int i = 0; i <= l; i++) {
        if (lu[i] == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
