/*************************************************************************
	> File Name: 1059明明的随机数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月16日 星期二 19时29分23秒
 ************************************************************************/

#include <iostream>
#include <set>

using namespace std;

int main () {
    set <int> s;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    while (!s.empty()) {
        cout << *s.begin() << ' ';
        s.erase(*s.begin());
    }
    cout << endl;
    return 0;
}
