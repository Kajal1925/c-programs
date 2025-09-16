#include<stdio.h>
void main(){
int previous_reading,present_reading,units;
float bill=0;
printf("Enter previous meter reading:\n");
scanf("%d",&previous_reading);
printf("Enter present meter reading:");
scanf("%d",&present_reading);
if(present_reading>=previous_reading){
units=present_reading-previous_reading;
printf("Consumed Units:%d\n",units);
//first 100 units=Rs5 per unit
//next 100 units=Rs7 per unit
//above 200 units=Rs10 per unit
if(units<=100){
bill=units*5;}
else if(units<=200){
bill=(100*5)+(units-100)*7;}
else{bill=(100*5)+(100*7)+(units-200)*10;}
printf("Total Electricity Bill=Rs.%.2f\n",bill);}
else{printf("Error: Present reading cannot be less than previous reading.\n");}
getch();}