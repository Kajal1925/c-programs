#include<stdio.h>
void main(){
int num_1,num_2,num_3;
printf("Enter the numbers (A and B and C):\n");
scanf("%d%d%d",&num_1,&num_2,&num_3);
if(num_1>=num_2&&num_1>=num_3){
printf("The number %d is LARGEST\n",num_1);}
else if(num_2>=num_1&&num_2>=num_3){
printf("The numer %d is LARGEST\n",num_2);}
else{
printf("The number %d is LARGEST\n",num_3);}
getch();}
