/*************************************************************************
	> File Name: 1168中位数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月09日 星期一 14时07分09秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> num;
int n, a;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        num.insert(upper_bound(num.begin(), num.end(), a), a);
        if (i % 2 == 0) { cout << num[i / 2] << endl; }
    }
    return 0;
}
