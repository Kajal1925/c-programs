#include<stdio.h>
void main(){
int month,year,days;
printf("Enter Month (1-12):\n");
scanf("%d",&month);
printf("Enter Year:\n");
scanf("%d",&year);
switch(month){
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
days=31;
break;
case 4: case 6: case 9: case 11:
days=30;
break;
case 2:
if(year%400==0||(year%4==0&&year%100!=0))
days=29;
else
days=28;
break;
default:printf("Invalid month number\n");}
printf("Number of days in month %d of %d year=%d\n",month,year,days);
getch();}
