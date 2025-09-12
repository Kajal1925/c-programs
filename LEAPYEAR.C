#include<stdio.h>
void main(){
int year;
printf("Enter the year:\n");
scanf("%d",&year);
/*if a year is leap year it should be divisible by 400
or it should be divisible by 4 while not divisible by 100 */
if((year%400==0)||(year%4==0&&year%100!=0)){
printf("The year %d is a LEAP year\n");}
else{printf("The year %d is NOT a leap year\n");}
getch();}