#include<stdio.h>
void main(){
int num_1,num_2,num_3;
printf("Enter the numbers (A and B and C)");
scanf("%d%d%d",&num_1,&num_2,&num_3);
if(num_1>num_2&&num_2>num_3){
printf("The number %d is LARGEST",num_1);}
elseif(num_1<num_2&&num_2>num_3){
printf("The numer %d is LARGEST",num_2);}
else{
printf("The number %d is LARGEST",num_3);}
getch();}