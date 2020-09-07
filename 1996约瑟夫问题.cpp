/*************************************************************************
	> File Name: 1996约瑟夫问题.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月13日 星期六 14时35分57秒
 ************************************************************************/

#include <iostream>
#include <queue>

using namespace std;

int main () {
    queue <int> people;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        people.push(i);
    }
    while (!people.empty()) {
        for (int i = 1; i <= m; i++) {
            if (i != m) {
                people.push(people.front());
                people.pop();
            } else {
                cout << people.front() << ' ';
                people.pop();
            }
        }
    }
    cout << endl;
    return 0;
}
