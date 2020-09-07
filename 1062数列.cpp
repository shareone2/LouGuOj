#include <stdio.h>
#include <math.h>
int k, n;
long long sum;
int main() {
    scanf("%d%d", &k, &n);
    for (int i = 0; n; n >>= 1, i++) { if (n & 1) { sum += pow(k, i); } }
    printf("%lld\n", sum);
    return 0;
}
