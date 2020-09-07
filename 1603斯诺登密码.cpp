/*************************************************************************
	> File Name: 1603斯诺登密码.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月18日 星期三 18时02分51秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;
string a;
char b;
map <string, int> num;
int ss[10], cnt = 1;
void judge(int x);
void biao();
int main() {
    biao();
    cin >> a;
    judge(num[a]);
    for (b = getchar(); b != '\n' && b != EOF; b = getchar()) {
        cin >> a;
        judge(num[a]);
    }
    sort(ss + 1, ss + cnt);
    for (int i = 1; i < (cnt == 1 ? 2 : cnt); i++) { i == 1 ? printf("%d", ss[i]) : printf("%02d", ss[i]); }
    cout << endl;
    return 0;
}
void judge(int x) {
    if (x) { ss[cnt++] = x; }
    return ;
}
void biao() {
    num["one"] = 1;
    num["two"] = 4;
    num["three"] = 9;
    num["four"] = 16;
    num["five"] = 25;
    num["six"] = 36;
    num["seven"] = 49;
    num["eight"] = 64;
    num["nine"] = 81;
    num["eleven"] = 21;
    num["twelve"] = 44;
    num["thirten"] = 69;
    num["fourteen"] = 96;
    num["fifteen"] = 25;
    num["sixteen"] = 56;
    num["seventeen"] = 89;
    num["eighteen"] = 24;
    num["nineteen"] = 61;
    num["a"] = 1;
    num["both"] = 4;
    num["another"] = 1;
    num["first"] = 1;
    num["second"] = 4;
    num["third"] = 9;
    return ;
}
