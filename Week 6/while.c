#include <stdio.h>

int main() {
	//int sum = 0;
	//int sum = 1;
	int sum = 13;

	int count = 1;

	while (count <= 10) {
		printf("sum(%d) * count(%d) = ", sum, count);
		sum *= count;
		printf("%d\n", sum);
		count++;
	}

	printf("\nTotal : count = %d, sum = %d", count, sum);

	return 0;
}