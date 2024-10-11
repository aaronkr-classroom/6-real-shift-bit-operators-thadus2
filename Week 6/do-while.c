#include <stdio.h>

int main() {
	int age;

	printf("Welcome to the Program");

	do {
		printf("Enter your age : ");
		scanf_s("%d", &age);

		if (age >= 18) 
			printf("Access granted! Welcome to the SECRET section!\n");
		else if (age > 0) 
			printf("Sorry, you must be 18 or older.\n");
		else
			printf("Invaild input. Enter a positive number.\n");
	} while (age <= 0);
	
	printf("Program end.\n");

	getch();

	return 0;
}