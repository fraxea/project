#include <stdio.h>
#define n 10

void printBoard() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3i ", i * j);
		}
		printf("\n");
	}

int main() {
	printf("Product table\n,");
	printf("Phase 1\n");
	printf("See:\n");
	printBoard();
	return 0;
}
