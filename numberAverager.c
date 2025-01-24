#include <stdio.h>

int main() {

	int arrayAmount;
	int value;

	printf("How many values are you entering?: ");
	scanf("%d", &arrayAmount);
	int values[arrayAmount];

	for (int i = 0; i < arrayAmount; i++) {
		printf("Number %d: ", i + 1);
		scanf("%d", &value);
		values[i] = value;
	} // end for loop
	
	printf("[ ");

	for (int i = 0; i < arrayAmount; i++) {

		printf("%d ", values[i]);
	} // end of for loop

	printf("] \n");
} // end main
