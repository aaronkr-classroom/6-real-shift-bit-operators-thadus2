#include <stdio.h>
#include <string.h>

int main() {
	char* string = "Hanbat National University";
	int len = strlen(string);

	for (int i = 0; i < len; i++, string++) {
		if (*string == 'a') {
			char upper = *string - 32;
			printf("%d : %c\n", i, upper);
		}
		else if (*string == ' ')
			continue;
		printf("%d : %c\n", i, *string);
	}

	getch();

	return 0;
}