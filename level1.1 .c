#pragma warning (disable:4996)
#include<stdio.h>
int a, b, c, d;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	printf("%d 0 0", c);
	printf("\n");
	if (a - c >= 0)d = a - c;
	else d = c - a;
	printf("%d %d 1", a, d);
	printf("\n");
	if (a - b >= 0)d += (a - b);
	else d += (b - a);
	printf("%d %d 0", b, d);
	printf("\n");
	return 0;
}