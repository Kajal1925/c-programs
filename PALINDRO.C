#include<stdio.h>
void main(){
int num,og_num,reversed=0,remainder;
printf("Enter a number\n");
scanf("%d",&num);
og_num=num;
while(num!=0){
remainder=num%10;
reversed=reversed*10+remainder;
num=num/10;}
if(og_num==reversed){
printf("%d is a PALINDROME\n",og_num);}
else{
printf("%d is NOT a palindrome\n",og_num);}
getch();}

