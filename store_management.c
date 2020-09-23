#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "item.h"

int main(){
	struct item items[100];
	int a, loop=1, i=0, j, temp=1, temp1=0;
	char name[30], *names, *namess;
	printf("Welcome to Basit's Store Management System \n");
	printf("What would you like to do? \n");
	while(loop==1){
		printf("Press 1 for adding items, 2 for displaying, 3 for listing items of a manufacturer, 4 for listing how many items available in stock, else for exiting \n");
		scanf("%d", &a);			
		switch(a)
		{
			case 1:
				printf("Enter item number ");
				scanf("%d", &items[i].item_num);
				printf("Enter item name ");
				scanf("%s", items[i].name);
				printf("Enter Manufacturer's name ");
				scanf("%s", items[i].manu_name);
				printf("Enter price ");
				scanf("%d", &items[i].price);
				printf("Enter quantity ");
				scanf("%d", &items[i].quantity);
				printf("Is the item available? ");
				scanf("%s", items[i].flagx);
				i++;
				printf("\n");
				break;
			case 2:
				temp1=0;
				printf("Enter Item's name ");
				scanf("%s", name);
				j=1;
				for(int k=0; k<100; k++){
					namess = items[k].name;
					j = strcmp(namess,name);
					if(j==0){
					names = items[k].name;
					temp=0;
					temp1=j;
					}
				}
				if(temp==0){
					j=temp1;
					printf("\n");
					printf("Item Number: %d, Item Name: %s, Manufacturer's name: %s, Item's price: %d, Quantity: %d, Availability: %s", items[j].item_num, items[j].name, items[j].manu_name, items[j].price, items[j].quantity, items[j].flagx);
				}
				break;
			case 3:
				printf("Enter Manufacturer's name ");
				scanf("%s", name);
				j=1;
				for(int l=0; l<100; l++){
					namess = items[l].manu_name;
					j = strcmp(namess,name);
					if(j==0){
						printf("\n");
						printf("Item Number: %d, Item Name: %s, Manufacturer's name: %s, Item's price: %d, Quantity: %d, Availability: %s", items[l].item_num, items[l].name, items[l].manu_name, items[l].price, items[l].quantity, items[l].flagx);
					}
				}
				break;
			case 4:
				printf("\n");
				printf("Enter item's name to check quantity ");
				scanf("%s", name);
				for(int m=0; m<100; m++){
					namess = items[m].name;
					j = strcmp(namess,name);
					if(j==0){
						printf("\n");
						printf("Item name: %s, Quantity: %d", items[m].name, items[m].quantity);
					}
				}
				break;
			default:
				break;
		}
		printf("\n");
		printf("Press 1 to continue, any other number to exit program ");
		scanf("%d", &loop);
		}
	printf("\n");
	printf("Press enter to continue ");
	getch();
	return 0;
}
