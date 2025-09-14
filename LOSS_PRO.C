#include<stdio.h>
void main(){
float cost_price,selling_price,profit,loss,profit_percent,loss_percent;
printf("Enter the COST PRICE:\n");
scanf("%f",&cost_price);
printf("Enter the SELLING PRICE:\n");
scanf("%f",&selling_price);
if(selling_price>cost_price){
printf("It's PROFIT\n");
profit=selling_price-cost_price;
printf("PROFIT=%.2f\n",profit);
profit_percent=(profit/cost_price)*100;
printf("The PROFIT PERCENTAGE is:%.2f\n",profit_percent);}
else if(cost_price>selling_price){
printf("It's LOSS\n");
loss=cost_price-selling_price;
printf("LOSS=%.2f\n",loss);
loss_percent=(loss/cost_price)*100;
printf("The LOSS PERCENTAGE is :%.2f\n",loss_percent);}
else{printf("NO Loss No Profit\n");}
getch();}