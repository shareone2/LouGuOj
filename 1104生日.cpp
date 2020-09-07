/*************************************************************************
	> File Name: 1104生日.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月09日 星期一 16时36分09秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
class people {
    public:
        string name;
        int year, month, day, cnt = 0;
        bool operator < (people a) const {
            if (year != a.year) { return year > a.year; }
            if (month != a.month) { return month > a.month; }
            if (day != a.day) { return day > a.day; }
            return cnt < a.cnt;
        }
};
int n, base = 1;
people point;
priority_queue <people> ss;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> point.name >> point.year >> point.month >> point.day;
        point.cnt = (base++);
        ss.push(point);
    }
    for (; ss.size(); ss.pop()) { cout << ss.top().name << endl; }
    return 0;
}
