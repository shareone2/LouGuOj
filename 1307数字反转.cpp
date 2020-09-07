
/*************************************************************************
	> File Name: T1077数字反转.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 14时57分55秒
 ************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char a[15], len;
    cin >> a;
    len = strlen(a); 
    if (a[0] == '-') {
        cout << a[0];
    }
    int t = 0;
    if ((a[0] == '-' && a[1] == '0' && a[2] == '\0') || (a[0] == '0' && a[1] == '\0')) {
        cout << '0';
    } 
    for (int i = len - 1; i >= 0; i--) {
        if (t == 1 && a[i] == '0' ) {
            cout << a[i];
        }
        if (a[i] != '0' && a[i] != '-') {
            cout << a[i];
            t = 1;
        }
    }
    cout << endl;
    return 0;
}
