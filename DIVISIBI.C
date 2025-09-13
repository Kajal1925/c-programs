#include<stdio.h>
void main(){
int num;
printf("Enter a number:\n");
scanf("%f",&num);
if((num%5==0)&&(num%11==0)){
printf("The number is DIVISIBLE by 5 and 11\n");}
else{
printf("The number is NOT divisible by 5 and 11\n");}
getch();}