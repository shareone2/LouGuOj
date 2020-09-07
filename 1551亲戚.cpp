/*************************************************************************
	> File Name: 1551亲戚.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月05日 星期三 16时57分38秒
 ************************************************************************/

#include <iostream>
using namespace std;
int people[5005], n, m, p;
int find (int x) { return people[x] == x ? x : (people[x] = find(people[x])); }
int main() {
    cin >> n >> m >> p;
    for (int i = 0; i <= n; i++) { people[i] = i; }
    int a, b;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        people[find(people[a])] = find(people[b]);
    }
    for (int i = 1; i <= p; i++) {
        cin >> a >> b;
        if (find(people[a]) != find(people[b])) { cout << "No\n"; }
        else { cout << "Yes\n"; }
    }
    return 0;
}
