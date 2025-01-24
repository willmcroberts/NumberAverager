#include <stdio.h>

int main() {

	int arrayAmount;
	float value;
	float average;
	int part;
	int sum = 0;

	printf("How many values are you entering?: ");
	scanf("%d", &arrayAmount);
	float values[arrayAmount];

	// input values	

	for (int i = 0; i < arrayAmount; i++) {
		printf("Number %d: ", i + 1);
		scanf("%f", &value);
		values[i] = value;
	} // end for loop
	
	printf(" \n");

	// print values

	printf("Numbers entered: [ ");

	for (int i = 0; i < arrayAmount; i++) {

		printf("%.2f ", values[i]);
	} // end of for loop

	printf("] \n");

	for (int i = 0; i < arrayAmount; i++) {
		part = values[i];
		sum = sum + part;
	} // end of for loop

	average = sum / (float)arrayAmount;

	printf("Average: %.2f \n", average);

	return(0);
} // end main
