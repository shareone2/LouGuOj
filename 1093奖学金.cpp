/*************************************************************************
	> File Name: 1093奖学金.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月17日 星期二 09时28分21秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
struct people {
    int chinese, math, english, sum = 0, number;
};
people num[310];
int n;
int cmp(people a, people b) {
    if (a.sum != b.sum) { return a.sum > b.sum; }
    if (a.chinese != b.chinese) { return a.chinese > b.chinese; }
    return a.number < b.number;
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        num[i].number = i;
        cin >> num[i].chinese >> num[i].math >> num[i].english;
        num[i].sum = num[i].sum + num[i].chinese + num[i].math + num[i].english;
    }
    stable_sort(num + 1, num + n + 1, cmp);
    for (int i = 1; i <= (n >= 5 ? 5 : n); i++) {
        cout << num[i].number << ' ' << num[i].sum << endl;
    }
    return 0;
}
