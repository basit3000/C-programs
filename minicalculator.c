#include<stdio.h>
#include<conio.h>
void main (void){
	int a,b,c;
 	printf("Enter 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division \n");
	scanf("%d", &c);
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Your answer is: ");
	if (c == 1)	
		printf("%d", a+b);
	else if (c == 2)	
		printf("%d", a-b);
	else if (c == 3)	
		printf("%d", a*b);
	else if (c == 4 && b != 0)	
		printf("%d", a/b);
	else 
		printf("Invalid input");
}
