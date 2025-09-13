#include<stdio.h>
void main(){
float num;
printf("Enter a number :\n");
scanf("%f",&num);
if(num>=0){
printf ("The absolute value of the number is : %f",num);}
else{
printf("The absolue value of the number is : %f",-(num));}
getch();}