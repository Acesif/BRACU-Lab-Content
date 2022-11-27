#include <stdio.h>
#include <stdlib.h>

struct food{
int quantity;
int unit_price;
};

int main(){
struct food paratha;
scanf("%d",&paratha.quantity);
scanf("%d",&paratha.unit_price);
int parathaPrice = paratha.quantity*paratha.unit_price;
struct food vegetable;
scanf("%d",&vegetable.quantity);
scanf("%d",&vegetable.unit_price);
int vegetablePrice = vegetable.quantity*vegetable.unit_price;
struct food mineralWater;
scanf("%d",&mineralWater.quantity);
scanf("%d",&mineralWater.unit_price);
int waterPrice = mineralWater.quantity*mineralWater.unit_price;
int numOfPeople;
scanf("%d",&numOfPeople);
float avg = (parathaPrice+vegetablePrice+waterPrice)/numOfPeople;
printf("%.2f",avg);
return 0;
}
