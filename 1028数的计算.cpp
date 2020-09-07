/*************************************************************************
	> File Name: 1028数的计算.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月09日 星期六 09时38分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int n, g[1001];
    cin >> n;
    g[0] = g[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            //g[i] = g[i - 1] + g[i / 2];
            g[i] = g[i - 2] + g[i / 2];
        } else {
            g[i] = g[i - 1];
        }
    }
    cout << g[n] << endl;
    return 0;
}
