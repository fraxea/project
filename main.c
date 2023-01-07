#include <stdio.h>

int square(int a) {
	if (a) return a * a;
	return 0;
}

int factorial(int n) {
	if (n == 0) return 1;
	return n * factorial(n - 1);
}

int main() {
	int a;
	scanf("%i", &a);
	a = factorial(a);
	printf("%i\n", square(a);
	return 0;
}
