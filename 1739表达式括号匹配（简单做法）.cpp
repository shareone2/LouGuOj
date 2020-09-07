/*************************************************************************
	> File Name: 1739表达式括号匹配（简单做法）.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月14日 星期日 06时18分18秒
 ************************************************************************/

#include <stdio.h>

int main () {
    int c, cnt = 0;
    while ((c = getchar()) != '@') {
        if (c == '(') cnt++;
        if (c == ')') cnt--;
        if (cnt < 0) break;
    }
    if (cnt == 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
