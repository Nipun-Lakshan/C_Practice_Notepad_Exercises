// Importing printf() and scanf() Functions From C Standard Library
# include <stdio.h>

// Prototype Function
void printList(long long list[], long long n);
void printLine(long long n);

// Main Function
int main(){
	
	// Header String Formatting
	printf("\n====================");
	printf("\nComma Seperated List");
	printf("\n====================\n\n");
	
	// Variable Declaration
	long long n; // Array Size
	long long i; // Loop Index
	
	// Request the Size of List of Numbers From The User
	printf("Enter the size of the list : ");
	scanf("%lld", &n);
	printf("\n");
	
	// Creating an Array From User Defined Limit
	long long list[n];
	
	// Request Data From The User
	for(i = 0; i < n; i++){
		if(i < 9){
		printf("Enter Number 0%lld : ",(i+1));
		scanf("%lld", &list[i]);
		}
		else{
			printf("Enter Number %lld : ",(i+1));
			scanf("%lld", &list[i]);
		}
	}
	printf("\n");
	
	// Calling Print Elements as Comma Seperated Function
	printList(list, n);
	printf("\n\n");
	
	// Plotting The Stars in a Line
	printLine(13);
	
	return 0;
}

// Print List Function
void printList(long long list[], long long n){
	printf("[");
	for (long long i = 0; i < n; i++){
		printf("%lld",list[i]);
		if(i!=(n-1)){
			printf(", ");
		}
		else{
			printf("]");
		}
	}
}

// Print a Line of Stars
void printLine(long long n){
	for (long long i = 0; i < n; i++){
		printf("*");
	}
}