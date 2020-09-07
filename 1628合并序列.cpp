/*************************************************************************
	> File Name: 1628合并序列.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年06月02日 星期日 10时07分18秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
string word[100005], ss;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) { cin >> word[i]; }
    cin >> ss;
    sort(word + 1, word + n + 1);
    for (int i = 1; i <= n; i++) { if (word[i].find(ss) == 0) cout << word[i] << endl; }
    return 0;
}
