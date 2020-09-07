/*************************************************************************
	> File Name: 1071潜伏者.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月18日 星期三 19时13分42秒
 ************************************************************************/

#include <iostream>
using namespace std;
char a[105], b[105], c[105], flog_a[30], flog_b[30], cnt = 0;
int main() {
    cin >> a >> b >> c;
    for (int i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        int x = (int)a[i] - 64, y = (int)b[i] - 64;
        if (flog_a[x] == 0) {
            flog_a[x] = b[i];
            if (flog_b[y] != 0 && flog_a[flog_b[y]] != a[i]) {
                cout << "Failed" << endl;
                return 0;
            }
            flog_b[y] = a[i];
            cnt++;
        } 
        if (flog_a[x] != 0 && flog_a[x] != b[i]) {
            cout << "Failed" << endl;
            return 0;
        }
    }
    if (cnt < 26) {
        cout << "Failed" << endl;
        return 0;
    } else {
        for (int i = 0; c[i] != '\0'; i++) {
            int x = (int)c[i] - 64;
            cout << flog_a[x];
        }
        cout << endl;
    }
    return 0;
}
