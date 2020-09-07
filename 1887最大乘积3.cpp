/*************************************************************************
	> File Name: 1887最大乘积3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月17日 星期五 20时17分32秒
 ************************************************************************/

#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    for (int j = 1; j <= m - n % m; j++) {
        cout << n / m << ' ';
    }
    for (int j = 1; j <= n % m; j++) {
        cout << n / m + 1 << ' ';
    }
    cout << endl;
    return 0;
}

