#include <stdio.h>
#include <ctype.h>

struct Order{
  int quantity;
  int price;
};
int main(){
int num = 0;
struct Order paratha;
struct Order vegetable;
struct Order water;
printf("Quantity Of Paratha:");
scanf("%d",&paratha.quantity);
printf("Unit Price:");
scanf("%d",&paratha.price);
printf("Quantity Of Vegetable:");
scanf("%d",&vegetable.quantity);
printf("Unit Price:");
scanf("%d",&vegetable.price);
printf("Quantity Of Mineral Water:");
scanf("%d",&water.quantity);
printf("Unit Price:");
scanf("%d",&water.price);
printf("Number of People:");
scanf("%d",&num);
int average = (paratha.quantity*paratha.price+vegetable.quantity*vegetable.price+water.quantity*water.price)/num;
printf("Individual people will pay: %f tk",paratha.quantity);
}