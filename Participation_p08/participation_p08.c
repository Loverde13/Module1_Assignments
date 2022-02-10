#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main() {
	printf(" List of 5 of favorite foods starting with B\n\n");
	char favorite_foods[5][15] = { "Bananas", "Bacon", "Brownies", "Brie", "Baklava" };

	//capatilize/i.e. sanitize
	for (int j = 0; j < 5; j++) {
		int length = strlen(favorite_foods[j]);
		for (int i = 0; i < length; i++) {
			if (favorite_foods[j][i] > 96 && favorite_foods[j][i] < 123)
				favorite_foods[j][i] = favorite_foods[j][i] - 32;
		}
	}

	 //Insertion Sort with sllight modification to get a complete alphabetical ordering	
	for (int k = 5; k >= 0; k--) {
		char outerConstant[15] = { "" };
		for (int i = 1; i < 5; i++) {
			strcpy(outerConstant, favorite_foods[i], 15);
			int j = i - 1;
			while (j >= 0 && favorite_foods[j][k] > outerConstant[k]) {
				strncpy(favorite_foods[j + 1], favorite_foods[j], 15);
				j = j - 1;
			}

			strncpy(favorite_foods[j + 1], outerConstant, 15);
		} 
		printf("[ ");
		for (int i = 0; i < 5; i++) {
			if (i == 4) printf("%s", favorite_foods[i]);
			else printf("%s, ", favorite_foods[i]);
		}
		if (k == 0) printf(" ] ==> Sorted\n");
		else if (k == 5) printf(" ] ==> Start\n\n");
		else printf(" ]\n\n"); 
	}
	return 0;
}

