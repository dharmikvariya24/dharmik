#include<stdio.h>
int main() {
	float celsius, fahrenheit;

	// ask the user to input the temperature in celsius
	printf("enter temperature in celsius: ");
	scanf("%f", &celsius);

	//convert celsius to fahrenheit
	fahrenheit = (9.0 / 5.0) * celsius + 32;

	// display the result
	printf("temperature in fahrenheit: %.2f\n", fahrenheit);

	return 0;
}
