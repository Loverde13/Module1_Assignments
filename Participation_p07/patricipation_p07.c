#include <stdio.h>
#include <string.h>

int main() {

	printf_s("Enter a sentence to be converted to uppercase: \n");
	char user_input[100];
	fgets(user_input, 100, stdin);

	// 97-65 = 32. character will be corrected 
	//char upperA = 65;
	//printf("%c", upperA);
	//if (upperA == 65) printf("yes");

	int length = strlen(user_input);
	for (int i = 0; i < length - 1; i++) {
		if (user_input[i] > 96 && user_input[i] < 123)
			user_input[i] = user_input[i] - 32;
	}
	printf("Uppercase conversion: %s", user_input);
	
	return 0;
}
