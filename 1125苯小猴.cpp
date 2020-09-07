/*************************************************************************
	> File Name: 1125苯小猴.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月12日 星期四 21时08分31秒
 ************************************************************************/

 #include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
char word;
int num[30], mind = 200, maxd = -1;
int is_primer(int x);
int main() {
    for (word = getchar(); word != '\n'; word = getchar()) { num[word - 95]++; }
    sort(num + 1, num + 27);
    mind = num[upper_bound(num + 1, num + 27, 0) - num], maxd = num[26];
    if (is_primer(maxd - mind)) { cout << "Lucky Word" << endl << maxd - mind << endl; }
    else { cout << "No Answer" << endl << '0' << endl; }
    return 0;
}
int is_primer(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) { return 0; }
    }
    return x >= 2 ? 1 : 0;
}

