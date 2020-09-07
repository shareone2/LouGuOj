/*************************************************************************
	> File Name: 1177快速排序（sort）.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月17日 星期五 20时14分01秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, num[100005];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = 0; i < n; i++) {
        cout << num[i] << ' ';
    }
    cout << endl;
    return 0;
}

