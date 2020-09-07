/*************************************************************************
	> File Name: 2708硬币翻转.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月07日 星期六 17时46分09秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
string a;
int main() {
    cin >> a;
    int cnt = a.size(), ans = cnt - 1;
    for (int i = 1; i < cnt; i++) {
        if (a[i] == a[i - 1]) { ans--; }
    }
    if (a[cnt - 1] == '0') { ans++; }
    cout << ans << endl;
    return 0;
}
