#include<stdio.h>

void main(void){
	int i;
	printf("Enter a number from 1 to 4 to get answer in string format \n");
	scanf("%d", &i);
	switch(i){
		case 1:
		printf("One");
		break;
		case 2:
		printf("Two");
		break;
		case 3:
		printf("Three");
		break;
		case 4:
		printf("Four");
		default:
		printf("Unrecognized number or smaller than 1 or greater than 4");
	}
}