#include <stdio.h>

int main() {
	
	int length;
	int width;
	int area;

	printf("**********************.Hello, this program tells you the area of a rectangular room.*********************************\n");
	printf("Please enter the length of the room in feet: \n");
	scanf("%d", &length);
	printf("Please enter the width of the room in feet: \n");
	scanf("%d", &width);
	
	int* width_address = &width;
	int* length_addresss = &length;
	
	area = *width_address * *length_addresss;

	printf("The area of the room is %d feet squared.\n", area);
	printf("\n***************************************************.END PROGRAM.*****************************************************\n");
	
	return 0;
}