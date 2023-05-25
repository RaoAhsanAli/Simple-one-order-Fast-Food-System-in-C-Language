#include<stdio.h> 
int main() 
{ 
 int numb; 
 int pizza,burger,sandwitches,beverages; 
 int quantity; 
 printf("Please enter your choice of fast food from the list below : \n1-Pizza \n2-Burger \n3-Sandwitches \n4-Beverages "); 
 printf("\n please enter number :"); 
 scanf("%d",&numb); 
 if(numb==1) 
 { 
 printf("\nYour choice = %d ",numb); 
 printf("\nSub menu for pizza with its prize is \n1-pepperoni rs 1200\n2-fajita rs 1200\n3-Hot n spicy rs 1200\n4-chickentikka rs 1200 "); 
 printf("\nplease select the quantity of food :"); 
 scanf("%d",&quantity); 
 printf("\nPlease take your food items \nTotal bill = RS %d Thanks.",quantity*1200); 
 
 } 
 else if(numb==2) 
 { 
 printf("\nYour choice = %d ",numb); 
 printf("\nSub menu for Burger is \n1-classic burger rs800 \n2-chicken cheese burger rs800 \n3-mexican burger 800"); 
 printf("\nplease select the quantity of food :"); 
 scanf("%d",&quantity); 
 printf("\nPlease take your food items \nTotal bill = RS %d Thanks.",quantity*800); 
 
 } 
 else if(numb==3) 
 { 
 printf("\nYour choice = %d ",numb); 
 printf("\nsub menu for sandwitches is \n1-chicken sandwitch rs200 \n2-club sandwitch rs200 \n3-veg sanwitch rs200"); 
 printf("\nplease select the quantity of food :"); 
 scanf("%d",&quantity); 
 printf("\nPlease take your food items \nTotal bill = RS %d Thanks.",quantity*200); 
 } 
 else 
 { 
 printf("\nYour choice = %d ",numb); 
 printf("\nsub menu for beverages is \n1-cofee rs100 \n2-tea rs100 \n4-milk rs100 \n4-shake rs100 \n5-softdrink rs100 \n6-green tea rs100"); 
 printf("\nplease select the quantity of food :"); 
 scanf("%d",&quantity); 
 printf("\nPlease take your food items \nTotal bill = RS %d Thanks.",quantity*100); 
 } 
 getchar(); 
 return 0; 
}