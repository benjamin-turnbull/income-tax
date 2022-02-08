#include <stdio.h>

int main (void) {
	float income, tax;

	printf("Enter income: \n");
	scanf("%f", &income);

	if (income < 751)
		tax = income/0.1f;
	else if (income < 2251)
		tax = 7.50f + (income - 750.00f)*0.2f;
	else if (income < 3751)
		tax = 37.50f + (income - 2250.00f)*0.3f;
	else if (income < 5251)
		tax = 82.50f + (income - 3750.00f)*0.4f;
	else if (income < 7001)
		tax = 142.50f + (income - 5250.00f)*0.5f;
	else	
		tax = 230.00f + (income - 7000.00f)*0.6f;

	printf("Tax due: $%.2f\n", tax);

	return 0;
}