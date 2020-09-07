/*************************************************************************
	> File Name: 5015标题统计.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月11日 星期六 20时17分40秒
 ************************************************************************/

#include <cstdio>
#include <vector>
using namespace std;
int main () {
    vector <char> V;
    char c;
    while ((c = getchar()) != '\n') {
        if (c == ' ') continue;
        V.push_back(c);
    }
    printf("%d\n", V.size());
    return 0;
}
