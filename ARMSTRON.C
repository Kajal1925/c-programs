#include<stdio.h>
#include<math.h>
void main(){
int num,remainder,n=0,og_num;
double result=0.0;
printf("Enter a number\n");
scanf("%d",&num);
og_num=num;
while(og_num!=0){
og_num=og_num/10;
n++;}
og_num=num;
while(og_num!=0){
remainder=og_num%10;
result+=pow(remainder,n);
og_num/=10;}
if((int)result==num){
printf("%d is an ARMSTRONG number\n",num);}
else{
printf("%d is NOT an armstrong number\n",num);}
getch();}