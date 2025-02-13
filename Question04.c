// Importing printf() and scanf() Functions From C Standard Library
# include <stdio.h>

// Prototypes of The Functions
void printMax(float num1, float num2);

// Main Function
int main(){
	
	// Variable Declaration
	float num1;
	float num2;
	
	// Header String Formatting
	printf("\n==============================");
	printf("\nMax Number Between Two Numbers");
	printf("\n==============================\n");
	
	// Request Input From User
	printf("\nEnter Number 01 : ");
	scanf("%f", &num1);
	printf("Enter Number 02 : ");
	scanf("%f", &num2);
	
	// Calling For The Function To Find Max Number
	printMax(num1, num2);
	return 0;
}

// printMax Function
void printMax(float num1, float num2){
	if(num1>num2){
		printf("\n%.2f is greater than %.2f.\n", num1, num2);
	}
	else if(num1 == num2){
		printf("\nThe inputted two numbers are equal!\n");
	}
	else{
		printf("\n%.2f is greater than %.2f.\n", num2, num1);
	}
}