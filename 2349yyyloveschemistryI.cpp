#include <stdio.h>
long double x;
int main() {
	scanf("%20Lf", &x);
	printf("%.8Lf\n", x / 23);
	return 0;
} 
