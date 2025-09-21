#include<stdio.h>
void main(){
float marks;
int range;
printf("Enter marks(0-100):\n");
scanf("%f",&marks);
if(marks<0||marks>100){
printf("Marks shoulb be between 0-100\n");}
range=(int)marks/10;
switch(range){
case 10: case 9: printf("Grade: A\n");
break;
case 8:printf("Grade: B\n");
break;
case 7:printf("Grade: C\n");
break;
case 6:printf("Grade: D\n");
break;
default:printf("Grade: F\n");
break;}
getch();}