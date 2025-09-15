#include<stdio.h>
#include<math.h>
void main(){
int num;
printf("Enter a number:\n");
scanf("%d",&num);
if(num%3==0&&num%7==0){
printf("%d is DIVISIBLE by both 3 and 7\n");}
else{printf("%d is NOT divisible by both 3 and 7\n");}
getch();}