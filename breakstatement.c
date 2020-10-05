#include<stdio.h>
void main(void){
	int i;
	for(i=1; i<100; i++){
		printf("%d \n",i);
		if(i==10){
			printf("Your value of i is %d", i);
			break;
		}
	}
}
