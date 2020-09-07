/*************************************************************************
	> File Name: 1867开灯.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月07日 星期六 18时33分02秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    for (int i = 1; i * i <= n; i++) { cout << i * i << ' '; }
    cout << endl;
    return 0;
}
