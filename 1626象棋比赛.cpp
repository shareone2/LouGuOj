/*************************************************************************
	> File Name: 1626象棋比赛.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月17日 星期五 20时15分11秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int m, n, num[100005], base_sum[100005], sum = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> num[i];
    }
    sort(num, num + m);
    for (int i = 0; i < m - 1; i++) {
        base_sum[i] = num[i + 1] - num[i];
    }
    sort(base_sum, base_sum + m - 1);
    for (int i = 0; i < n; i++) {
        sum += base_sum[i];
    }
    cout << sum << endl;
    return 0;
}

