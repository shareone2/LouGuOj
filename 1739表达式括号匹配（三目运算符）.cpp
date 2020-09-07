#include <stdio.h>
int main () {
    int c, cnt = 0;
    while ((c = getchar()) != '@' && cnt >= 0) c == '(' ? cnt++ : (c == ')' ? cnt-- : c = 1);
    printf(cnt == 0 ? "YES\n" : "NO\n");
    return 0;
}
