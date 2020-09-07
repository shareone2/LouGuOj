/*************************************************************************
	> File Name: 1097统计数字.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 19时43分16秒
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;
map <int, int> num;
int n;
int main (){
    cin >> n;
    int base_num;
    for (int i = 1; i <= n; i++) {
        cin >> base_num;
        num[int(base_num)]++;
    }
    for (map <int, int> :: iterator it = num.begin(); it != num.end(); it++) {
        pair <int, int> item = *it;
        cout << item.first << ' ' << item.second << endl;
    }
    return 0;
}

