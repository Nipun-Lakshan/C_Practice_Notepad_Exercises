// Function Prototype
void displayUser(int USerNo);

// Main Function
#include <stdio.h>

int main() {
    displayUser(1);
    displayUser(0);
    return 0;
}

// Display User Function
void displayUser(int USerNo) {
	if(USerNo == 1){
    printf("\n============================================================\n");
    printf("                      User Information           \n");
    printf("============================================================\n");
    printf("Name          : A.W.W.A. Nipun Lakshan\n");
    printf("Email Address : awwanipunlakshan@gmail.com\n");
    printf("LinkedIn Link : https://www.linkedin.com/in/william-a-nipun/\n");
    printf("============================================================\n\n");
	}
	if(USerNo == 0){
    printf("============================================================\n");
    printf("                      User Information           \n");
    printf("============================================================\n");
    printf("Name          : P. Vikum Bandara\n");
    printf("Email Address : vikumbandara@gmail.com\n");
    printf("LinkedIn Link : https://www.linkedin.com/in/vikum/\n");
    printf("============================================================\n");
	}
}