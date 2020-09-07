/*************************************************************************
	> File Name: 1469找筷子.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月17日 星期五 20时16分10秒
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;
map <int, int> num;
int main() {
    int n, base_num;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> base_num;
        num[int(base_num)]++;
    }
    for (map <int, int> :: iterator it = num.begin(); it != num.end(); it++) {
        pair <int, int> item = *it;
        if (item.second % 2 != 0) cout << item.first << ' ';
    }
    cout << endl;
    return 0;
}

